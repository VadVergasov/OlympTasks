// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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

vector<long long> tree;
vector<long long> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tr + tl) >> 1;
        build((v << 1), tl, tm);
        build((v << 1) + 1, tm + 1, tr);
        tree[v] = max(tree[(v << 1)], tree[(v << 1) + 1]);
    }
}

long long get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tr + tl) >> 1;
    return max(get((v << 1), tl, tm, l, min(r, tm)),
               get((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(int v, int tl, int tr, int pos, int x) {
    if (tl == tr) {
        tree[v] += x;
    } else {
        int tm = (tl + tr) >> 1;
        if (pos <= tm) {
            update((v << 1), tl, tm, pos, x);
        } else {
            update((v << 1) + 1, tm + 1, tr, pos, x);
        }
        tree[v] = max(tree[(v << 1)], tree[(v << 1) + 1]);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    a.resize(n);
    for (auto& i : a) {
        cin >> i;
    }
    tree.resize(4 * n);
    build(1, 0, n - 1);
    int q;
    cin >> q;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int pos, x;
            cin >> pos >> x;
            update(1, 0, n - 1, pos - 1, x);
        } else {
        }
    }
    return 0;
}