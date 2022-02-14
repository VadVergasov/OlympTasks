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
    long double x;
    cin >> x;
    double a = __builtin_sinf(x), b = __builtin_cosf(x), c = 0;
    if (x < 0) {
        x = -x;
        c = __builtin_logf(x);
    } else {
        c = __builtin_logf(x);
    }
    if (a < b) {
        if (a < c) {
            cout << a << endl;
        } else {
            cout << c << endl;
        }
    } else {
        if (b < c) {
            cout << b << endl;
        } else {
            cout << c << endl;
        }
    }
    return 0;
}
