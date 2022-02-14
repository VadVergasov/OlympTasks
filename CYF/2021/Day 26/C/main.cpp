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

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("tune=native")

using namespace std;

const long long mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> dp(n + 1);
    for (auto &i : a) {
        cin >> i;
    }
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        vector<int> nums(3e5, 0);
        int mx = 0, cnt = 0;
        for (int j = i; j > 0; j--) {
            if (nums[a[j - 1]] == 0) {
                cnt++;
            }
            nums[a[j - 1]]++;
            mx = max(mx, a[j - 1]);
            if (mx == cnt) {
                dp[i] += dp[j - 1];
            }
        }
        dp[i] %= mod;
    }
    cout << dp[n];
    return 0;
}
