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
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double x, y, k;
    cin >> k >> x >> y;
    double a = abs(x - k), b = abs(x), c = abs(y - k), d = abs(y), res = 1e9;
    if (x < 0 || x > k || y < 0 || y > k) {
        cout << "Not in the square! ";
    }
    if (res > a) {
        res = a;
    }
    if (res > b) {
        res = b;
    }
    if (res > c) {
        res = c;
    }
    if (res > d) {
        res = d;
    }
    cout << res << endl;
    return 0;
}
