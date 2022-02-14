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

// Variant 6
int main() {
    int n;
    cout << "Enter number of subsections: ";
    while (!(cin >> n) || n <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter number of subsections: ";
    }
    double res, step = 2.0 / n, value = 1e9;
    for (double i = 1; i <= 3; i += step) {
        if (value > abs(acos(exp(-i)) - 2 * sin(i))) {
            res = i;
            value = abs(acos(exp(-i)) - 2 * sin(i));
        }
    }
    cout << res << endl;
    return 0;
}
