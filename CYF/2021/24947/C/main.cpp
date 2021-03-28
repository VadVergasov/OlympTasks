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

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("tune=native")

using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<vector<int>> cnt(n + 1, vector<int>(n + 1, 0));
    for (auto &i : a) {
        cin >> i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cnt[i][j] = cnt[i - 1][j] + cnt[i][j - 1] - cnt[i - 1][j - 1] +
                        (a[i - 1] > a[j - 1] && i < j);
        }
    }
    auto inv = [&](int l, int r) {
        return cnt[r][r] - cnt[l - 1][r] - cnt[r][l - 1] + cnt[l - 1][l - 1];
    };
    auto calc = [&](long long a) {
        vector<pair<long long, int>> dp(n + 1, {1e18, 1e9});
        dp[0] = {0, 0};
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[i] > make_pair(dp[j].first + inv(j + 1, i) + a,
                                      dp[j].second + 1)) {
                    dp[i] = make_pair(dp[j].first + inv(j + 1, i) + a,
                                      dp[j].second + 1);
                }
            }
        }
        return dp[n];
    };
    long long l = 0, r = 1e9, ans = 1e9;
    while (l <= r) {
        long long m = (l + r) >> 1;
        if (calc(m).second <= k) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << calc(ans).first - k * ans;
    return 0;
}
