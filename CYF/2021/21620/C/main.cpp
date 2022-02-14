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
    int n;
    cin >> n;
    vector<vector<int> > m(n, vector<int>(n)), a(n, vector<int>(n)),
        b(n, vector<int>(n));
    vector<pair<int, int> > c, d;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                a[i][j] = 0;
                b[i][j] = 1;
            } else {
                a[i][j] = 1;
                b[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != m[i][j]) {
                c.push_back({i, j});
            }
        }
    }
    if (c.size() == 2) {
        swap(m[c.front().first][c.front().second],
             m[c.back().first][c.back().second]);
        bool f = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] != m[i][j]) {
                    f = false;
                }
            }
        }
        if (f) {
            cout << "YES";
            return 0;
        }
        swap(m[c.front().first][c.front().second],
             m[c.back().first][c.back().second]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i][j] != m[i][j]) {
                d.push_back({i, j});
            }
        }
    }
    if (d.size() == 2) {
        swap(m[d.front().first][d.front().second],
             m[d.back().first][d.back().second]);
        bool f = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (b[i][j] != m[i][j]) {
                    f = false;
                }
            }
        }
        if (f) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
