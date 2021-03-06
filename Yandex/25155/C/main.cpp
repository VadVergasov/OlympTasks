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

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    vector<pair<long long, long long> > dp(n, {0, 0});
    for (int i = 01; i < n; i++) {
        int to = max(a[i], a[i - 1] + dp[i - 1].second);
        dp[i].second = to - a[i];
        if (to == a[i]) {
            dp[i].first = dp[i - 1].first + to - (a[i - 1] + dp[i - 1].second);
        } else {
            dp[i].first =
                dp[i - 1].first + max(0LL, to - a[i] - dp[i - 1].second);
        }
    }
    cout << dp.back().first;
    return 0;
}
