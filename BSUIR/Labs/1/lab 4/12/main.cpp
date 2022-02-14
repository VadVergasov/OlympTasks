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
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    while (!(cin >> n) || n <= 0 || n > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of array: ";
    }
    vector<int> a(n);
    for (auto &i : a) {
        cout << "Enter the next number of the array: ";
        while (!(cin >> i)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the next number of the array: ";
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                a.erase(a.begin() + i);
                n--;
                i--;
            }
        }
    }
    for (auto &i : a) {
        cout << i << " ";
    }
    cout << endl << a.size() << endl;
    return 0;
}
