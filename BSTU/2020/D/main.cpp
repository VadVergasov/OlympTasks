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
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m)), dp(n, vector<int>(m, 1e9));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        dp[0][i] = 0;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++) {
                dp[i][j] =
                    min(dp[i][j], dp[i - 1][k] + abs(a[i][j] - a[i - 1][k]));
            }
        }
    }
    int res = 1e9, pos;
    for (int i = 0; i < m; i++) {
        res = min(res, dp.back()[i]);
        if (res == dp.back()[i]) {
            pos = i;
        }
    }
    vector<int> r;
    r.push_back(a.back()[pos]);
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < m; j++) {
            if (res == dp[i][j]) {
                for (int k = 0; k < m; k++) {
                    if (dp[i - 1][k] + abs(a[i - 1][k] - a[i][j]) == res) {
                        r.push_back(a[i - 1][k]);
                        res -= abs(a[i - 1][k] - a[i][j]);
                        break;
                    }
                }
            }
        }
    }
    sort(r.begin(), r.end());
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << " ";
    }
    return 0;
}