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
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter size of cube to build: ";
    while (!(cin >> n) || n <= 0 || n > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter size of cube to build: ";
    }
    vector<vector<vector<int> > > a(n, vector<vector<int> >(n, vector<int>(n)));
    for (auto &i : a) {
        for (auto &j : i) {
            for (auto &k : j) {
                cout << "Enter the next number of cube: ";
                while (!(cin >> k)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Enter the next number of cube: ";
                }
            }
        }
    }
    vector<int> sum = {0, 0, 0, 0};
    for (int i = 0; i < n; i++) {
        sum[0] += a[i][i][i];
        sum[1] += a[n - i - 1][i][i];
        sum[2] += a[i][n - i - 1][i];
        sum[3] += a[n - i - 1][n - i - 1][i];
    }
    cout << max({sum[0], sum[1], sum[2], sum[3]}) << endl;
    return 0;
}
