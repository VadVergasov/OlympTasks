// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <bits/stdc++.h>

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("tune=native")

using namespace std;

struct elem {
    elem *prev = nullptr, *next = nullptr;
    int val;
    elem(int v, elem *p) {
        val = v;
        prev = p;
    }
};

struct change {
    int index;
    elem *next = nullptr, *prev = nullptr;
    bool f;
};

const int block_sz = 450;

inline void del(int index, long long &res, bool f, bool history,
                vector<elem> &lst, stack<change> &st) {
    elem *next = lst[index].next, *prev = lst[index].prev;
    if (next != nullptr) {
        res -= abs(lst[index].val - next->val);
        next->prev = prev;
    }
    if (prev != nullptr) {
        res -= abs(lst[index].val - prev->val);
        prev->next = next;
    }
    if (next != nullptr && prev != nullptr) {
        res += abs(next->val - prev->val);
    }
    lst[index].next = nullptr;
    lst[index].prev = nullptr;
    if (history) {
        change cur;
        cur.index = index;
        cur.next = next;
        cur.prev = prev;
        cur.f = f;
        st.push(cur);
    }
}

inline void rollback(change cur, long long &res, vector<elem> &lst) {
    elem *left = cur.prev, *right = cur.next;
    if (left != nullptr && right != nullptr) {
        res -= abs(left->val - right->val);
    }
    if (left != nullptr) {
        res += abs(lst[cur.index].val - left->val);
        left->next = &lst[cur.index];
    }
    if (right != nullptr) {
        res += abs(right->val - lst[cur.index].val);
        right->prev = &lst[cur.index];
    }
    lst[cur.index].next = right;
    lst[cur.index].prev = left;
}

bool comp(const pair<pair<int, int>, int> &a,
          const pair<pair<int, int>, int> &b) {
    if (a.first.first / block_sz == b.first.first / block_sz) {
        return -a.first.second < -b.first.second;
    }
    return a.first.first / block_sz < b.first.first / block_sz;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<pair<int, int> > nums(n);
    vector<elem> lst(n, {-1, nullptr});
    for (auto &i : a) {
        cin >> i;
    }
    elem start(a.front(), nullptr);
    lst.front() = start;
    nums[0] = {a[0], 0};
    long long res = 0;
    for (int i = 1; i < n; i++) {
        elem cur(a[i], &lst[i - 1]);
        res += abs(a[i] - a[i - 1]);
        lst[i] = cur;
        nums[i] = make_pair(a[i], i);
    }
    for (int i = n - 2; i >= 0; i--) {
        lst[i].next = &lst[i + 1];
    }
    sort(nums.begin(), nums.end());
    sort(a.begin(), a.end());
    vector<pair<pair<int, int>, int> > req(q);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        int left = lower_bound(a.begin(), a.end(), l) - a.begin(),
            right = upper_bound(a.begin(), a.end(), r) - a.begin() - 1;
        req[i] = make_pair(make_pair(left, right), i);
    }
    sort(req.begin(), req.end(), comp);
    stack<change> st;
    vector<long long> ans(q, -1LL);
    int left = 0, right = n - 1;
    for (int i = 0; i < q; i++) {
        int l = req[i].first.first, r = req[i].first.second;
        if (l > r) {
            ans[req[i].second] = 0;
            continue;
        }
        if (i && ((req[i].first.first / block_sz) * block_sz !=
                  (req[i - 1].first.first / block_sz) * block_sz)) {
            right = n - 1;
            while (!st.empty()) {
                if (!st.top().f) {
                    rollback(st.top(), res, lst);
                }
                st.pop();
            }
            while (left < (req[i].first.first / block_sz) * block_sz &&
                   left <= right) {
                del(nums[left].second, res, true, false, lst, st);
                left++;
            }
        }
        while (right > r && right > 0) {
            del(nums[right].second, res, false, true, lst, st);
            right--;
        }
        while (left < l && left <= right) {
            del(nums[left].second, res, true, true, lst, st);
            left++;
        }
        if (left > right) {
            ans[req[i].second] = 0;
        } else {
            ans[req[i].second] = res;
        }
        while (!st.empty() && st.top().f) {
            change cur = st.top();
            st.pop();
            rollback(cur, res, lst);
            left--;
        }
    }
    for (const auto &i : ans) {
        cout << i << '\n';
    }
    return 0;
}
