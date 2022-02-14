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

vector<pair<long long, int> > tree;
vector<int> a;

void push(int v, int tl, int tr) {
    if (tree[v].second != -10000) {
        tree[v * 2].second = tree[v * 2 + 1].second = tree[v].second;
        int tm = (tl + tr) / 2;
        tree[v * 2].first = (long long)tree[v].second * (tm - tl + 1);
        tree[v * 2 + 1].first = (long long)tree[v].second * (tr - tm);
        tree[v].first = tree[v * 2].first + tree[v * 2 + 1].first;
        tree[v].second = -10000;
    }
}

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v].first = a[tl];
    } else {
        int tm = (tr + tl) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        tree[v].first = tree[v * 2].first + tree[v * 2 + 1].first;
    }
}

long long get(int v, int tl, int tr, int l, int r) {
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
        tree[v].first = x;
    } else if (tl == l && tr == r) {
        tree[v].second = x;
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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, q;
    in >> n >> q;
    a.resize(n);
    tree.resize(4 * n, make_pair(0, -10000));
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == '=') {
            int t1, t2, x;
            in >> t1 >> t2 >> x;
            update(1, 0, n - 1, t1 - 1, t2 - 1, x);
        } else {
            int t1, t2;
            in >> t1 >> t2;
            out << get(1, 0, n - 1, t1 - 1, t2 - 1) << "\n";
        }
    }
    return 0;
}