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

int main() {
    char s, t;
    int x1, y1, x2, y2, x, y, d, o, n;
    cin >> s >> y1 >> t >> y2;
    x1 = s - 'a';
    x2 = t - 'a';
    x = abs(x2 - x1);
    y = abs(y2 - y1);
    d = min(x, y);
    o = max(x, y) - d;
    n = d + o;
    cout << n << "\n";
    for (int i = 0; i < d; i++) {
        if (x2 > x1) {
            cout << "R";
        } else {
            cout << "L";
        }
        if (y2 > y1) {
            cout << "U\n";
        } else {
            cout << "D\n";
        }
    }
    x -= d;
    y -= d;
    for (int i = 0; i < x; i++) {
        if (x2 > x1) {
            cout << "R\n";
        } else {
            cout << "L\n";
        }
    }
    for (int i = 0; i < y; i++) {
        if (y2 > y1) {
            cout << "U\n";
        } else {
            cout << "D\n";
        }
    }
    return 0;
}
