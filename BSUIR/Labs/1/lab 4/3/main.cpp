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
#include <algorithm>
#include <iostream>

using namespace std;

// Variant 6
int main() {
    int n, m;
    cout << "Enter the size of 2d array: ";
    while (!(cin >> n >> m) || n <= 0 || n > 1e6 || m <= 0 || m > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of 2d array: ";
    }
    int** a = new int*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
    }
    int *row_mn = new int[n], *column_mn = new int[m], *row_mx = new int[n],
        *column_mx = new int[m];
    for (int i = 0; i < n; i++) {
        row_mn[i] = 1e9;
        row_mx[i] = -1e9;
    }
    for (int i = 0; i < n; i++) {
        column_mn[i] = 1e9;
        column_mx[i] = -1e9;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter the next (" << i + 1 << ", " << j + 1
                 << ") element of the array: ";
            while (!(cin >> a[i][j]) || a[i][j] <= 0 || a[i][j] > 1e6) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter the next (" << i + 1 << ", " << j + 1
                     << ") element of the array: ";
            }
            row_mx[i] = max(row_mx[i], a[i][j]);
            row_mn[i] = min(row_mn[i], a[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            column_mx[j] = max(column_mx[j], a[i][j]);
            column_mn[j] = min(column_mn[j], a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((a[i][j] == column_mn[j] && a[i][j] == row_mx[i]) ||
                (a[i][j] == column_mx[j] && a[i][j] == row_mn[i])) {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}
