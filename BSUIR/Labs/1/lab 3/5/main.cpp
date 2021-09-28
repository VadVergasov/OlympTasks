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
#include <iomanip>
#include <iostream>

using namespace std;

// Variant 6
int main() {
    int n, k;
    cout << "Enter the number of members of the sequence and number of tests: ";
    while (!(cin >> n >> k)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the number of members of the sequence and number of "
                "tests: ";
    }
    while (k--) {
        double x;
        cout << "Enter the number: ";
        while (!(cin >> x)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the number: ";
        }
        double res = x;
        for (int i = 1; i <= n; i++) {
            long long fact = 1;
            for (int j = 1; j <= 2 * i + 1; j++) {
                fact *= j;
            }
            double p = 1;
            for (int i = 0; i < 2 * n + 1; i++) {
                p *= x;
            }
            res += p / fact;
        }
        cout << fixed << setprecision(6)
             << (__builtin_expf(x) - __builtin_expf(-x)) / 2 << " " << res
             << endl;
    }
    return 0;
}
