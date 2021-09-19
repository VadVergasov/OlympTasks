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
#include <cmath>
#include <iostream>

using namespace std;

// Variant 6
int main() {
    int x, number;
    double f, a, b;
    cin >> x >> a >> b >> number;
    switch (number) {
        case 1:
            f = 2 * x;
            break;
        case 2:
            f = pow(x, 3);
            break;
        case 3:
            f = x / 3.0;
            break;
    }
    if (x >= 0) {
        x = sin(x);
    }
    double y = (2.0 / 3.0) * a * pow(sin(x), 2) - 3.0 * b / 4 * pow(cos(f), 2);
    cout << y << " with 6th formula, x: " << x << " f(x): " << f << endl;
    return 0;
}
