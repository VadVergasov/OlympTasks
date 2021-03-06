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

const int N = 1005;
vector<int> can[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    int mx = 0;
    for (auto &i : v) {
        cin >> i;
        mx = max(mx, i);
    }
    int k;
    cin >> k;
    if (mx <= 1000) {
        for (int i = 1; i <= mx; ++i) {
            for (int j = 1; j <= mx; ++j) {
                int f = i & j;
                if (__builtin_popcount(f) != k) continue;

                can[i].push_back(j);
            }
        }

        vector<int> dp(mx + 1);

        for (int i = 0; i < n; ++i) {
            for (auto j : can[v[i]]) {
                int f = j & v[i];
                assert(__builtin_popcount(f) == k);
                dp[v[i]] = max(dp[v[i]], dp[j] + 1);
            }
        }

        cout << *max_element(dp.begin(), dp.end());
        return 0;
    }
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (__builtin_popcount(v[i - 1] & v[j - 1]) == k) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end());
}
