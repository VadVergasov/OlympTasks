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

vector<long long> tree;
vector<long long> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tr + tl) >> 1;
        build((v << 1), tl, tm);
        build((v << 1) + 1, tm + 1, tr);
        tree[v] = __gcd(tree[(v << 1)], tree[(v << 1) + 1]);
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
    return __gcd(get((v << 1), tl, tm, l, min(r, tm)),
                 get((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(int v, int tl, int tr, int pos, int x) {
    if (tl == tr) {
        tree[v] = x;
    } else {
        int tm = (tl + tr) >> 1;
        if (pos <= tm) {
            update(v * 2, tl, tm, pos, x);
        } else {
            update(v * 2 + 1, tm + 1, tr, pos, x);
        }
        tree[v] = __gcd(tree[v * 2], tree[v * 2 + 1]);
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    a.resize(n);
    tree.resize(4 * n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    int m;
    in >> m;
    for (int i = 0; i < m; i++) {
        char t;
        in >> t;
        if (t == 'g') {
            int l, r;
            in >> l >> r;
            out << get(1, 0, n - 1, l - 1, r - 1) << " ";
        } else {
            int pos, x;
            in >> pos >> x;
            update(1, 0, n - 1, pos, x);
        }
    }
    return 0;
}