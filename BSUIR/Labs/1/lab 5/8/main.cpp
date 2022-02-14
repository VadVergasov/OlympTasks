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
#include <vector>

using namespace std;

long long g(long long n) {
    if (n == 0) {
        return 0;
    }
    return powl((n + 1) / 2, 2) + g(n / 2);
}

int main() {
    int cur = 0;
    int a = -1;
    cin >> a;
    cout << a << endl;
    while (1) {
        cur++;
        long long n;
        cout << "Enter n: ";
        while (!(cin >> n) || n > 1e9) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter n: ";
        }
        if (n < 1) {
            break;
        }
        cout << g(n) << endl;
    }
    return 0;
}
