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
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    if (n == k) {
        long long res = 0;
        for (int i = 0; i < n - 1; i++) {
            res += a[i] ^ a[i + 1];
        }
        cout << res;
        return 0;
    }
    vector<vector<long long> > dp(n + 1, vector<long long>(k + 1, 0)), dp1;
    dp1 = dp;
    for (int i = 1; i <= n; i++) {
        dp1[i][1] = a[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            for (int z = j - 1; z < i; z++) {
                dp[i][j] =
                    max(dp[i][j], dp[z][j - 1] + (dp1[z][j - 1] ^ a[i - 1]));
                if (dp[i][j] == (dp[z][j - 1] + (dp1[z][j - 1] ^ a[i - 1]))) {
                    dp1[i][j] = a[i - 1];
                }
            }
        }
    }
    long long res = 0;
    for (int i = k - 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j == 1) {
                res = max(res, 0LL);
                continue;
            }
            res = max(res, dp[i][j]);
        }
    }
    cout << res;
    return 0;
}