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
    vector<vector<int> > g(3, vector<int>(3));
    vector<vector<bool> > f(3, vector<bool>(3));
    for (auto &i : g) {
        for (auto &j : i) {
            cin >> j;
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (g[j][k] == b) {
                    f[j][k] = true;
                }
            }
        }
    }
    if (f[0][0] && f[0][1] && f[0][2] || f[0][0] && f[1][0] && f[2][0] ||
        f[0][0] && f[1][1] && f[2][2] || f[0][2] && f[1][1] && f[2][0] ||
        f[1][0] && f[1][1] && f[1][2] || f[2][0] && f[2][1] && f[2][2] ||
        f[0][1] && f[1][1] && f[2][1] || f[0][2] && f[1][2] && f[2][2]) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}