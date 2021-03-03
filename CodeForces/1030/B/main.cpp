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
    int n, d, m, tmp1, tmp2;
    cin >> n >> d >> m;
    pair<int, int> left = make_pair(d, 0), right = make_pair(n - d, n),
                   up = make_pair(n, n - d), down = make_pair(0, d);
    vector<vector<int> > field(n);
    for (int i = 0; i < n; i++) {
        field[i].resize(n, 0);
    }
    cout << (left.first < up.first) << " " << (left.second < down.second)
         << "\n";
    for (int i = left.first; i < up.first; i++) {
        field[n - i - 1][left.second + (i - left.first)] = 1;
        for (int j = left.second; j <= down.second; j++) {
            field[n - i - 1 + j][left.second + (i - left.first) + j] = 1;
        }
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (field[i + 1][j] == 1 && field[i - 1][j] == 1 &&
                field[i][j + 1] == 1 && field[i][j - 1] == 1) {
                field[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    vector<pair<int, int> > a;
    for (int i = 0; i < m; i++) {
        cin >> tmp1 >> tmp2;
        if (field[n - tmp1][tmp2 - 1] == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
