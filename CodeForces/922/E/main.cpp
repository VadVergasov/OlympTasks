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
    long long n, w, b, x, res = 0;
    cin >> n >> w >> b >> x;
    vector<long long> c(n), cost(n);
    for (auto &i : c) {
        cin >> i;
    }
    for (auto &i : cost) {
        cin >> i;
    }
    vector<vector<long long> > dp(n + 1, vector<long long>(1e4 + 1, -1));
    dp[0][0] = w;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 1e4 + 1; j++) {
            long long mx = w + j * b;
            for (int k = 0; k <= min((long long)j, c[i - 1]); k++) {
                if (dp[i - 1][j - k] != -1) {
                    if (min(mx, min((j - k) * b + w, dp[i - 1][j - k] + x) -
                                    cost[i - 1] * k) >= 0) {
                        dp[i][j] = max(
                            dp[i][j],
                            min(mx, min((j - k) * b + w, dp[i - 1][j - k] + x) -
                                        cost[i - 1] * k));
                        mx += b;
                        res = max(res, (long long)j);
                    }
                }
            }
        }
    }
    cout << res;
    return 0;
}