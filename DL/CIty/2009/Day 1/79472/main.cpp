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

vector<int> tree, pos;

void build(int v, int tl, int tr) {
    if (tl == tl) {
        tree[v] = pos[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
    }
}

void update(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return;
    }
    if (tl == l && tr == r) {
        tree[v]++;
    } else {
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(tm, r));
        update(v * 2 + 1, tm + 1, tr, max(l, tm), r);
    }
}

int get(int v, int tl, int tr, int pos) {
    if (tl == tr) {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    if (pos <= tm) {
        return tree[v] + get(v * 2, tl, tm, pos);
    } else {
        return tree[v] + get(v * 2 + 1, tm + 1, tr, pos);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    tree.resize(4 * (n + m));
    pos.resize(n);
    for (int i = 0; i < n; i++) {
        pos[i] = n - (i + 1);
    }
    build(1, 0, n - 1);
    int num = n;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cout << get(1, 0, n + num, pos[t - 1]) << " ";
        update(1, 0, num - 1, 0, num - 1);
        pos[t - 1] = num;
        num++;
    }
    return 0;
}