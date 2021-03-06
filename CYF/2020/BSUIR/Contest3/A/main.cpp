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
    long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> a(n);
    long long i = 0;
    for (auto& [f, s] : a) {
        cin >> f;
        s = i;
        i++;
    }
    sort(a.begin(), a.end());
    vector<long long> b(n);
    long long g = 1;
    for (long long i = 0; i < n; i++) {
        b[a[i].second] = g;
        if ((i + 1) % k == 0) {
            g++;
        }
    }
    vector<long long> dp(n + 1, 1e18);
    dp[0] = -1e18;
    for (long long i = 0; i < n; i++) {
        long long j =
            (long long)(upper_bound(dp.begin(), dp.end(), b[i]) - dp.begin());
        if (dp[j - 1] <= b[i] && b[i] <= dp[j]) {
            dp[j] = b[i];
        }
    }
    long long mx = 0;
    for (long long i = dp.size() - 1; i >= 0; i--) {
        if (dp[i] != 1e18) {
            mx = i;
            break;
        }
    }
    cout << n - mx;
    return 0;
}