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
    int n, xr = 0, num = 0, q;
    cin >> n >> q;
    num = n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        xr ^= t;
    }
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t != 3) {
            int x;
            cin >> x;
            if (t == 2) {
                num++;
                xr ^= x;
            } else {
                xr ^= x;
                num--;
            }
        } else {
            if (xr == 0) {
                cout << num << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}