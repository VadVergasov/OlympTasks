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

using namespace std;

vector<pair<int, int> > tree;
vector<int> a;

void push(int v, int tl, int tr) {
    if (tree[v].second != -10000) {
        if (tree[v * 2].second == -10000) {
            tree[v * 2].second = 0;
        }
        if (tree[v * 2 + 1].second == -10000) {
            tree[v * 2 + 1].second = 0;
        }
        tree[v * 2].second += tree[v].second;
        tree[v * 2 + 1].second += tree[v].second;
        int tm = (tl + tr) / 2;
        tree[v * 2].first += tree[v].second * (tm - tl + 1);
        tree[v * 2 + 1].first += tree[v].second * (tr - tm);
        tree[v].first += tree[v * 2].first + tree[v * 2 + 1].first;
        tree[v].second = -10000;
    }
}

int get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v].first;
    }
    push(v, tl, tr);
    int tm = (tr + tl) / 2;
    return get(v * 2, tl, tm, l, min(r, tm)) +
           get(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int l, int r, int x) {
    if (l > r) {
        return;
    }
    if (tl == tr) {
        tree[v].first += x;
    } else if (tl == l && tr == r) {
        if (tree[v].second == -10000) {
            tree[v].second = 0;
        }
        tree[v].second += x;
        push(v, tl, tr);
    } else {
        push(v, tl, tr);
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), x);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, x);
        tree[v].first = tree[v * 2].first + tree[v * 2 + 1].first;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    tree.resize(4 * n, {0, -10000});
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        update(1, 0, n - 1, a, b, 1);
        // for (int j = 0; j < n; j++) {
        //     cout << get(1, 0, n - 1, j, j) << " ";
        // }
        // cout << endl;
    }
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        res[i] = get(1, 0, n - 1, i, i);
    }
    sort(begin(res), end(res));
    cout << res[res.size() / 2];
    return 0;
}