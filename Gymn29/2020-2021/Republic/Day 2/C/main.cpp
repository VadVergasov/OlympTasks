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

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("sse,sse3,popcnt")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int_fast32_t n, q;
    cin >> n >> q;
    vector<int_fast32_t> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int_fast32_t t, l, r, k, res = 0;
    while (q--) {
        cin >> t >> l >> r;
        l--;
        r--;
        if (t == 1) {
            cin >> k;
            for (; l <= r; l++) {
                a[l] += k;
            }
        } else {
            res = 0;
            for (; l <= r; l++) {
                res += __builtin_popcount(a[l]);
            }
            cout << res << '\n';
        }
    }
    return 0;
}
