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
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, res = 1;
    cout << "Enter the number of extensions: ";
    while (!(cin >> n) || n <= 0 || n > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the number of extensions: ";
    }
    for (int i = 0; i < n; i++) {
        int tmp;
        cout << "Enter the next number of port in extension: ";
        while (!(cin >> tmp)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the next number of port in extension: ";
        }
        res += tmp - 1;
    }
    cout << res << endl;
    return 0;
}
