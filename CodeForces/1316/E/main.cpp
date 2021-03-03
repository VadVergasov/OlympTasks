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
// https://codeforces.com/contest/1316/problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, p, k;
    cin >> n >> p >> k;
    vector<pair<long long, vector<long long> > > a(n,
                                                   {0, vector<long long>(p)});
    for (auto &i : a) {
        cin >> i.first;
    }
    for (auto &[f, i] : a) {
        for (auto &j : i) {
            cin >> j;
        }
    }
    sort(rbegin(a), rend(a));
    vector<vector<long long> > dp(n + 1, vector<long long>(1 << p, -1));
    dp[0][0] = 0;
    for (long long i = 0; i < n; i++) {
        for (long long mask = 0; mask < (1 << p); mask++) {
            if (dp[i][mask] == -1LL) {
                continue;
            }
            int added = i - __builtin_popcount(mask);
            if (added < k) {
                dp[i + 1][mask] =
                    max(dp[i + 1][mask], dp[i][mask] + a[i].first);
            } else {
                dp[i + 1][mask] = max(dp[i + 1][mask], dp[i][mask]);
            }
            for (int t = 0; t < p; t++) {
                if (mask & (1 << t)) {
                    continue;
                }
                dp[i + 1][mask | (1 << t)] = max(dp[i + 1][mask | (1 << t)],
                                                 dp[i][mask] + a[i].second[t]);
            }
        }
    }
    cout << dp[n][(1 << p) - 1];
    return 0;
}