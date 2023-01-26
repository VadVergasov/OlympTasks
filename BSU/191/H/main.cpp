// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        string s1, s2;
        cin >> s1 >> s2;
        vector<vector<long long> > dp(s1.size() + 1,
                                      vector<long long>(s2.size() + 1, 0));
        for (long long i = 1; i <= (long long)s1.size(); i++) {
            for (long long j = 1; j <= (long long)s2.size(); j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }
        if ((long long)max(s1.size(), s2.size()) - dp.back().back() <= k) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
