"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

vector<int> tree, a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        tree[v] = __gcd(tree[v * 2], tree[v * 2 + 1]);
    }
}

int get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    return __gcd(get(v * 2, tl, tm, l, min(r, tm)),
                 get(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n;
    a.resize(n);
    tree.resize(4 * n, 0);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    in >> m;
    for (int i = 0; i < m; i++) {
        int t1, t2;
        in >> t1 >> t2;
        out << get(1, 0, n - 1, t1 - 1, t2 - 1) << " ";
    }
    return 0;
}