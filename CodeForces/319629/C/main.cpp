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
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<long long>> dp(m, vector<long long>(1 << n, 0));
    vector<vector<char>> dots(n, vector<char>(m, 2));
    vector<vector<bool>> good(1 << n, vector<bool>(1 << n, false));
    for (int i = 0; i < 1 << n; i++) {
        for (int j = 0; j < 1 << n; j++) {
            bool f = true;
            for (int k = 0; k < n - 1; k++) {
                int cnt = (((1 << k) & j) != 0) + (((1 << k) & i) != 0) +
                          (((1 << (k + 1)) & i) != 0) +
                          (((1 << (k + 1)) & j) != 0);
                if (cnt != 1 && cnt != 3) {
                    f = false;
                    break;
                }
            }
            if (f) {
                good[i][j] = true;
                good[j][i] = true;
            }
        }
    }
    for (int i = 0; i < k; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        x--;
        y--;
        dots[x][y] = c;
    }
    for (int i = 0; i < 1 << n; i++) {
        bool f = true;
        for (int j = 0; j < n; j++) {
            if (dots[j][0] != 2 && dots[j][0] != ((i & (1 << j)) != 0)) {
                f = false;
                break;
            }
        }
        if (!f) {
            continue;
        }
        dp[0][i] = 1;
    }
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < 1 << n; j++) {
            for (int k = 0; k < 1 << n; k++) {
                if (good[j][k] || good[k][j]) {
                    bool f = true;
                    for (int z = 0; z < n; z++) {
                        if (dots[z][i] != 2 &&
                            dots[z][i] != ((j & (1 << z)) != 0)) {
                            f = false;
                            break;
                        }
                        if (dots[z][i - 1] != 2 &&
                            dots[z][i - 1] != ((k & (1 << z)) != 0)) {
                            f = false;
                            break;
                        }
                    }
                    if (!f) {
                        continue;
                    }
                    dp[i][j] += dp[i - 1][k];
                }
            }
        }
    }
    long long res = 0;
    for (int i = 0; i < 1 << n; i++) {
        res += dp.back()[i];
    }
    cout << res;
    return 0;
}
