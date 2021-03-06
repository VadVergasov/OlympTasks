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
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, resh = 0, eight = 0;
    cin >> n >> m;
    vector<vector<char> > a(n, vector<char>(m)), b(n, vector<char>(m)),
        c(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '#') {
                resh++;
            }
        }
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            int r = 0;
            if (a[i - 1][j] == '#') {
                r++;
            }
            if (a[i - 1][j - 1] == '#') {
                r++;
            }
            if (a[i - 1][j + 1] == '#') {
                r++;
            }
            if (a[i + 1][j] == '#') {
                r++;
            }
            if (a[i + 1][j + 1] == '#') {
                r++;
            }
            if (a[i + 1][j - 1] == '#') {
                r++;
            }
            if (a[i][j + 1] == '#') {
                r++;
            }
            if (a[i][j - 1] == '#') {
                r++;
            }
            b[i][j] = r + '0';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i][j] == '8') {
                c[i - 1][j] = '#';
                c[i - 1][j - 1] = '#';
                c[i - 1][j + 1] = '#';
                c[i][j - 1] = '#';
                c[i + 1][j - 1] = '#';
                c[i + 1][j + 1] = '#';
                c[i + 1][j] = '#';
                c[i][j + 1] = '#';
            }
        }
    }
    bool res = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != c[i][j]) {
                res = false;
                break;
            }
        }
        if (!res) {
            break;
        }
    }
    if (!res) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
