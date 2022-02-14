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
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x < y) {
        x = 0;
    } else if (x > y) {
        y = 0;
    } else {
        x = 0;
        y = 0;
    }
    cout << x << " " << y << endl;
    double a, b, c, k;
    cin >> a >> b >> c >> k;
    if (a < b) {
        if (a < c) {
            a -= k;
        } else {
            c -= k;
        }
    } else {
        if (b < c) {
            b -= k;
        } else {
            c -= k;
        }
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
