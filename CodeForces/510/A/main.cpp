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
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char> > a(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
            a[i][j] = '#';
        }
        if (i + 1 != n) {
            if (i / 2 % 2 == 0) {
                a[i + 1][m - 1] = '#';
            } else {
                a[i + 1][0] = '#';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}
