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
    string x, y;
    int m, s, i;
    cin >> m >> s;
    if (s == 0) {
        if (m != 1) {
            cout << "-1 -1";
        } else {
            cout << "0 0";
        }
        return 0;
    }
    for (i = 0; i < m; i++) {
        int t = min(s, 9);
        x += t + '0';
        s -= t;
    }
    if (s > 0) {
        cout << "-1 -1";
        return 0;
    }
    for (i = m - 1; i > -1; i--) {
        y += x[i];
    }
    for (i = 0; y[i] == '0'; i++)
        ;
    y[i]--;
    y[0]++;
    cout << y << ' ' << x;
    return 0;
}
