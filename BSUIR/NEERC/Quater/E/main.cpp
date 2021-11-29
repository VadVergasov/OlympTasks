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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int zeros = 0, negative = 0, mx = -1e9, mn = 1e9;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            if (tmp == 0) {
                zeros++;
            } else if (tmp < 0) {
                negative++;
                mx = max(mx, tmp);
            } else {
                mn = min(mn, tmp);
            }
        }
        if (zeros && negative % 2 == 1) {
            cout << zeros << '\n';
        } else if (!zeros && negative % 2 == 1) {
            cout << (negative % 2 == 0 ? 0 : min(-mx + 1, mn + 1)) << '\n';
        } else {
            cout << zeros + (negative % 2 == 0 ? 0 : min(-mx + 1, mn + 1))
                 << '\n';
        }
    }
    return 0;
}
