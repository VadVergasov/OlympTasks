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

#pragma GCC optimize("O3,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int b, c;
        cin >> b >> c;
        int l = 5000, r = 1e8;
        while (r - l > 1) {
            int m = (r + l) / 2;
            int cnt1 = (double)m / (double)log((double)m),
                cnt2 = (double)(m + b) / log((double)(m + b));
            cout << cnt2 - cnt1 << "\n";
            if (cnt2 - cnt1 < c) {
                r = m;
            } else {
                l = m;
            }
        }
        if (l == 1e8 - 1) {
            cout << "-1\n";
            continue;
        }
        cout << l << " " << l + b - 1 << "\n";
    }
    cout << (83631.0) / log(83631.0) - (3632.0) / log(3652.0);
    return 0;
}
