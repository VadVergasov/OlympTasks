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

vector<pair<long long, long long> > tree;

void push(int v) {
    if (tree[v].second != -1) {
        tree[v * 2].second = tree[v * 2 + 1].second = tree[v].second;
        tree[v].second = -1;
    }
}

void update(int v, int tl, int tr, int l, int r, int val) {
    if (l > r) {
        return;
    }
    if (tl == l && tr == r) {
        tree[v].first = tree[v].second;
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(tm, r), val);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, val);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    tree.resize(4 * n, make_pair(0, -1));
    return 0;
}