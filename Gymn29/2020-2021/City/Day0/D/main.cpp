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
    if (n == 2) {
        cout << "1 2 2" << endl;
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0) {
            cout << "! 1" << endl;
            return 0;
        } else {
            cout << "! 2" << endl;
            return 0;
        }
    }
    int l = 1, r = n, m = (r + l) / 2;
    while (1) {
        m = (r + l) / 2;
        if (m == l) {
            break;
        }
        cout << l << " " << m << " " << r << endl;
        int x, y, z;
        cin >> x >> y >> z;
        if (y == 0) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << "! " << r << endl;
    return 0;
}
