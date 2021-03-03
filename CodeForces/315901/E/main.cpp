"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("diameter.in");
    ofstream cout("diameter.out");
    int n;
    cin >> n;
    vector<vector<int> > d(n, vector<int>(n));
    for (auto &i : d) {
        for (auto &j : i) {
            cin >> j;
            if (j == -1) {
                j = 1e9;
            }
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (d[i][k] < 1e9 && d[k][j] < 1e9) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }
    int diam = -1e9, radius = 1e9;
    for (int i = 0; i < n; i++) {
        int mx = -1e9;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            mx = max(mx, d[i][j]);
        }
        radius = min(radius, mx);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || d[i][j] == 1e9) {
                continue;
            }
            diam = max(diam, d[i][j]);
        }
    }
    cout << diam << "\n" << radius;
    return 0;
}
