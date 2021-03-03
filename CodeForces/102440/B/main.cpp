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
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define inf 1e18

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    ll ans = 0;
    vector<ll> dp(n + 1, inf);
    dp[0] = -inf;
    for (int i = 1; i <= n; ++i) {
        int pos = upper_bound(dp.begin(), dp.end(), v[i - 1]) - dp.begin();
        if (dp[pos - 1] < v[i - 1] && dp[pos] > v[i - 1]) {
            dp[pos] = v[i - 1];
            ans = max(ans, 1LL * pos);
        }
    }
    cout << ans;
    return 0;
}