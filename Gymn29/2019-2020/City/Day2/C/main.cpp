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

vector<vector<long long> > tree;

void build(long long v, long long tl, long long tr, vector<long long> &a) {
    if (tl == tr) {
        tree[v] = vector<long long>(1, a[tl]);
    } else {
        long long m = (tl + tr) / 2;
        build(v * 2, tl, m, a);
        build(v * 2 + 1, m + 1, tr, a);
        long long i1 = 0, i2 = 0;
        while (i1 + i2 < tree[v * 2].size() + tree[v * 2 + 1].size() &&
               i1 + i2 < 40) {
            if (i1 < tree[v * 2].size() &&
                    tree[v * 2][i1] > tree[v * 2 + 1][i2] ||
                i2 == tree[v * 2 + 1].size()) {
                tree[v].push_back(tree[v * 2][i1]);
                i1++;
            } else {
                tree[v].push_back(tree[v * 2 + 1][i2]);
                i2++;
            }
        }
    }
}

vector<long long> get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return vector<long long>();
    } else if (tl == l && tr == r) {
        return tree[v];
    }
    int m = (tl + tr) / 2;
    vector<long long> res, left = get(v * 2, tl, m, l, min(m, r)),
                           right = get(v * 2 + 1, m + 1, tr, max(l, m + 1), r);
    res.resize(min(40, (int)(left.size() + right.size())));
    int i1 = 0, i2 = 0;
    while ((i1 + i2 < left.size() + right.size()) && (i1 + i2 < 40)) {
        if (i2 == right.size() || (i1 < left.size() && left[i1] > right[i2])) {
            res[i1 + i2] = left[i1];
            i1++;
        } else {
            res[i1 + i2] = right[i2];
            i2++;
        }
    }
    return res;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    tree.resize(4 * n);
    for (auto &i : a) {
        cin >> i;
    }
    build(1, 0, n - 1, a);
    long long q;
    cin >> q;
    for (long long i = 0; i < q; i++) {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        vector<long long> o = get(1, 0, n - 1, l, r);
        long double res = o.back();
        for (long long j = o.size() - 1; j >= 0; j--) {
            res += o[j];
            res /= 2;
        }
        cout << fixed << setprecision(4) << res << "\n";
    }
    return 0;
}