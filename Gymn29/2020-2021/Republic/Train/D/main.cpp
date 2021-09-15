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
    int n;
    cin >> n;
    int l = 1, r = n, mid = (n + 1) / 2;
    while (l < r) {
        mid = (r + l) / 2;
        int a = (mid + l) / 2, c = (r + mid) / 2;
        cout << a << " " << mid << " " << c << endl;
        int x, y, z;
        cin >> x >> y >> z;
        if (z == 0) {
            if (y == 0) {
                if (x == 0) {
                    r = a;
                } else {
                    l = a;
                    r = mid;
                }
            } else {
                r = c;
                l = mid;
            }
        } else {
            l = c + 1;
        }
    }
    cout << "! " << l << endl;
    return 0;
}
