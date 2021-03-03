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

long long calc(long long l, long long r, vector<vector<long long> > &dp,
               vector<long long> &pref) {
    if (l > r) {
        dp[l][r] = 1e9;
        return 1e9;
    }
    if (dp[l][r] != -1) {
        return dp[l][r];
    }
    if (l == r) {
        dp[l][r] = 0;
        return 0;
    }
    for (long long i = l; i < r; i++) {
        long long left, right = (pref[r] - pref[i]) % 100;
        if (l == 0) {
            left = pref[i] % 100;
        } else {
            left = (pref[i] - pref[l - 1]) % 100;
        }
        long long cur =
            calc(l, i, dp, pref) + calc(i + 1, r, dp, pref) + left * right;
        if (dp[l][r] > cur || dp[l][r] == -1) {
            dp[l][r] = cur;
        }
    }
    return dp[l][r];
}

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    vector<long long> pref(n);
    pref.front() = a.front();
    for (long long i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }
    vector<vector<long long> > dp(n, vector<long long>(n, -1));
    cout << calc(0, n - 1, dp, pref);
    return 0;
}