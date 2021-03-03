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
// https://codeforces.com/contest/909/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> a(n);
    vector<vector<int> > dp(n, vector<int>(n));
    for (auto &i : a) {
        cin >> i;
    }
    dp[0][0] = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 'f') {
            dp[i + 1][0] = 0;
            for (int j = 1; j < n; j++) {
                dp[i + 1][j] = dp[i][j - 1];
            }
        } else {
            long long sum = 0;
            for (int j = 0; j < n; j++) {
                sum += dp[i][j];
                sum %= 1000000007;
            }
            for (int j = 0; j < n; j++) {
                dp[i + 1][j] = sum;
                sum = (sum - dp[i][j] + 1000000007) % 1000000007;
            }
        }
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += dp.back()[i];
        res %= 1000000007;
    }
    cout << res;
    return 0;
}