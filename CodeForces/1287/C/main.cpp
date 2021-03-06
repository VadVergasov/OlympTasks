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
    int n, odd = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 1) {
            odd++;
        }
        cin >> a[i];
    }
    vector<vector<vector<vector<int> > > > dp(
        n, vector<vector<vector<int> > >(
               n + 1, vector<vector<int> >(n + 1, vector<int>(2, 10e8))));
    if (a.front() == 0) {
        dp[0][1][0][0] = 0;
        dp[0][0][1][1] = 0;
    } else {
        if (a.front() % 2 == 0) {
            dp[0][1][0][0] = 0;
        } else {
            dp[0][0][1][1] = 0;
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i] == 0) {
            if (a[i - 1] == 0) {
                for (int j = 0; j <= i + 1; j++) {
                    for (int k = 0; k <= i + 1; k++) {
                        if (j + k != (i + 1)) {
                            continue;
                        }
                        if (j - 1 >= 0) {
                            dp[i][j][k][0] =
                                min(dp[i][j][k][0], dp[i - 1][j - 1][k][1] + 1);
                            dp[i][j][k][0] =
                                min(dp[i][j][k][0], dp[i - 1][j - 1][k][0]);
                        }
                        if (k - 1 >= 0) {
                            dp[i][j][k][1] =
                                min(dp[i][j][k][1], dp[i - 1][j][k - 1][1]);
                            dp[i][j][k][1] =
                                min(dp[i][j][k][1], dp[i - 1][j][k - 1][0] + 1);
                        }
                    }
                }
            } else {
                for (int j = 0; j <= i + 1; j++) {
                    for (int k = 0; k <= i + 1; k++) {
                        if (j + k != (i + 1)) {
                            continue;
                        }
                        if (j - 1 >= 0) {
                            dp[i][j][k][0] =
                                min(dp[i][j][k][0],
                                    dp[i - 1][j - 1][k][a[i - 1] % 2] +
                                        a[i - 1] % 2);
                        }
                        if (k - 1 >= 0) {
                            dp[i][j][k][1] =
                                min(dp[i][j][k][1],
                                    dp[i - 1][j][k - 1][a[i - 1] % 2] +
                                        (1 - a[i - 1] % 2));
                        }
                    }
                }
            }
        } else {
            if (a[i - 1] % 2 != a[i] % 2 && a[i - 1] != 0) {
                for (int j = 0; j <= i + 1; j++) {
                    for (int k = 0; k <= i + 1; k++) {
                        if (j + k != (i + 1)) {
                            continue;
                        }
                        if (j - (1 - a[i] % 2) >= 0 && k - a[i] % 2 >= 0) {
                            dp[i][j][k][a[i] % 2] =
                                min(dp[i][j][k][a[i] % 2],
                                    dp[i - 1][j - (1 - a[i] % 2)][k - a[i] % 2]
                                      [a[i - 1] % 2] +
                                        1);
                        }
                    }
                }
            } else if (a[i - 1] % 2 == a[i] % 2 && a[i - 1] != 0) {
                for (int j = 0; j <= i + 1; j++) {
                    for (int k = 0; k <= i + 1; k++) {
                        if (j + k != (i + 1)) {
                            continue;
                        }
                        if (j - (1 - a[i] % 2) >= 0 && k - a[i] % 2 >= 0) {
                            dp[i][j][k][a[i] % 2] =
                                min(dp[i][j][k][a[i] % 2],
                                    dp[i - 1][j - (1 - a[i] % 2)][k - a[i] % 2]
                                      [a[i] % 2]);
                        }
                    }
                }
            } else {
                for (int j = 0; j <= i + 1; j++) {
                    for (int k = 0; k <= i + 1; k++) {
                        if (j + k != (i + 1)) {
                            continue;
                        }
                        if (j - (1 - a[i] % 2) >= 0 && k - a[i] % 2 >= 0) {
                            dp[i][j][k][a[i] % 2] =
                                min(dp[i][j][k][a[i] % 2],
                                    dp[i - 1][j - (1 - a[i] % 2)][k - a[i] % 2]
                                      [abs(0 - a[i] % 2)]);
                        }
                        if (j - a[i] % 2 >= 0 && k - (1 - a[i] % 2) >= 0) {
                            dp[i][j][k][a[i] % 2] =
                                min(dp[i][j][k][a[i] % 2],
                                    dp[i - 1][j - a[i] % 2][k - (1 - a[i] % 2)]
                                      [1 - a[i] % 2] +
                                        1);
                        }
                    }
                }
            }
        }
    }
    if (a.back() == 0) {
        cout << min(dp.back()[n - odd][odd][0], dp.back()[n - odd][odd][1]);
    } else {
        cout << dp.back()[n - odd][odd][a.back() % 2];
    }
    return 0;
}