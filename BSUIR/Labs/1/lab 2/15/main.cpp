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
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double k;
    cin >> k;
    cout << "Мы нашли " << k;
    if (floor(k) != ceil(k)) {
        cout << " гриба в лесу" << endl;
    } else if ((int)k >= 10 && (int)k <= 20) {
        cout << " грибов в лесу" << endl;
    } else if ((int)k % 10 == 1) {
        cout << " гриб в лесу" << endl;
    } else if ((int)k % 10 >= 2 && (int)k % 10 <= 4) {
        cout << " гриба в лесу" << endl;
    } else {
        cout << " грибов в лесу" << endl;
    }
    return 0;
}
