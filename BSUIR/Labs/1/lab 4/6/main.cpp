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
#include <vector>

using namespace std;

int main() {
    int n, m;
    cout << "Enter the size of 2d array: ";
    while (!(cin >> n >> m) || n <= 0 || n > 1e6 || m <= 0 || m > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of 2d array: ";
    }
    vector<vector<int> > a(n + 2, vector<int>(m + 2, 0)),
        b(n + 2, vector<int>(m + 2, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "Enter the next (" << i + 1 << ", " << j + 1
                 << ") element of the array: ";
            while (!(cin >> a[i][j]) || a[i][j] <= 0 || a[i][j] > 1e6) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter the next (" << i + 1 << ", " << j + 1
                     << ") element of the array: ";
            }
            b[i][j] = max({a[i][j], b[i - 1][j], b[i][j - 1]});
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
