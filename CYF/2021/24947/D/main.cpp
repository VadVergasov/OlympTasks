// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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

using namespace std;

struct vertex {
    int cnt, nw;
    vector<vertex*> next;

    vertex() {
        nw = 0;
        cnt = 0;
        next.resize(2, nullptr);
    }

    vertex(vertex* right, vertex* left) {
        nw = 0;
        cnt = 0;
        next.resize(2, nullptr);
        next[1] = right;
        next[0] = left;
    }
};

void get_ans(vertex* cur, int num, int depth, int& third, vector<int>& res) {
    if (depth > 30) {
        return;
    }
    cur->cnt += cur->nw;
    cur->nw = 0;
    for (int i = 0; i < cur->cnt; i++) {
        res.push_back(num ^ third);
    }
    for (int i = 0; i < 2; i++) {
        if (cur->next[i] == nullptr) {
            continue;
        }
        get_ans(cur->next[i], num + i * (1 << depth), depth + 1, third, res);
    }
}

int main() {
    ifstream cin("input.txt");
    // ofstream cout("output.txt");
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int n, q;
    vertex* root = new vertex();
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        vertex* cur = root;
        while (t) {
            if (cur->next[t & 1] == nullptr) {
                cur->next[t & 1] = new vertex();
            }
            cur = cur->next[t & 1];
            t >>= 1;
        }
        cur->cnt++;
    }
    int third = 0;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 2) {
            vertex* cur = root;
            int depth = 0;
            while (cur != nullptr) {
                swap(cur->next[0], cur->next[1]);
                if (cur->cnt != 0) {
                    if (cur->next[1] == nullptr) {
                        cur->next[1] = new vertex();
                    }
                    cur->next[1]->nw += cur->cnt;
                    cur->cnt = 0;
                }
                cur->cnt += cur->nw;
                cur->nw = 0;
                cur = cur->next[(third & (1 << depth)) != 0];
                depth++;
                vector<int> res;
                get_ans(root, 0, 0, third, res);
                sort(res.begin(), res.end());
                cout << "\n";
                for (const auto& i : res) {
                    cout << i << " ";
                }
                cout << "\n";
            }
        } else {
            int x;
            cin >> x;
            if (t == 1) {
                x ^= third;
                vertex* cur = root;
                while (x) {
                    if (cur->next[x & 1] == nullptr) {
                        cur->next[x & 1] = new vertex();
                    }
                    cur = cur->next[x & 1];
                    x >>= 1;
                }
                cur->cnt++;
            } else if (t == 3) {
                third ^= x;
            } else {
                x ^= third;
                vertex* cur = root;
                while (x) {
                    cur = cur->next[x & 1];
                    x >>= 1;
                }
                cur->cnt--;
            }
        }
        vector<int> res;
        get_ans(root, 0, 0, third, res);
        sort(res.begin(), res.end());
        for (const auto& i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    vector<int> res;
    get_ans(root, 0, 0, third, res);
    sort(res.begin(), res.end());
    for (const auto& i : res) {
        cout << i << " ";
    }
    return 0;
}
