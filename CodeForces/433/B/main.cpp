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
vector<long long> trees;
vector<long long> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tr + tl) >> 1;
        build((v << 1), tl, tm);
        build((v << 1) + 1, tm + 1, tr);
        tree[v] = tree[(v << 1)] + tree[(v << 1) + 1];
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
    return get((v << 1), tl, tm, l, min(r, tm)) +
           get((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r);
}

void build1(int v, int tl, int tr) {
    if (tl == tr) {
        trees[v] = a[tl];
    } else {
        int tm = (tr + tl) >> 1;
        build1((v << 1), tl, tm);
        build1((v << 1) + 1, tm + 1, tr);
        trees[v] = trees[(v << 1)] + trees[(v << 1) + 1];
    }
}

long long get1(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return trees[v];
    }
    int tm = (tr + tl) >> 1;
    return get1((v << 1), tl, tm, l, min(r, tm)) +
           get1((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r);
}

int main() {
    int n;
    cin >> n;
    a.resize(n);
    tree.resize(4 * n);
    trees.resize(4 * n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(1, 0, n - 1);
    sort(a.begin(), a.end());
    build1(1, 0, n - 1);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (t1 == 1) {
            cout << get(1, 0, n - 1, t2 - 1, t3 - 1) << "\n";
        } else {
            cout << get1(1, 0, n - 1, t2 - 1, t3 - 1) << "\n";
        }
    }
    return 0;
}