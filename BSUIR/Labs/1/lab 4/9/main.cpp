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
    cout << "Enter the size of square-matrix: ";
    while (!(cin >> n) || n <= 0 || n > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of square-matrix: ";
    }
    vector<vector<int> > a(n, vector<int>(n)), b(n, vector<int>(n)),
        c(n, vector<int>(n, 0));
    for (auto &i : a) {
        for (auto &j : i) {
            cout << "Enter the next number of A matrix: ";
            while (!(cin >> j)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter the next number of A matrix: ";
            }
        }
    }
    for (auto &i : b) {
        for (auto &j : i) {
            cout << "Enter the next number of B matrix: ";
            while (!(cin >> j)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter the next number of B matrix: ";
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (auto i : c) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
