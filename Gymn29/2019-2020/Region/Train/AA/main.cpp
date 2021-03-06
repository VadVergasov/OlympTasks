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
    int q1, p1, q2, p2, a;
    cin >> q1 >> p1 >> q2 >> p2 >> a;
    vector<int> dp(a + q2 + q1 + 1, 10e7);
    dp[q1] = p1;
    dp[0] = 0;
    for (int i = 1; i <= a + q1 + q2; i++) {
        if (i - q1 >= 0) {
            dp[i] = min(dp[i - q1] + p1, dp[i]);
        }
        if (i - q2 >= 0) {
            dp[i] = min(dp[i - q2] + p2, dp[i]);
        }
    }
    int res = 10e7;
    for (int i = a; i <= a + q1 + q2; i++) {
        res = min(res, dp[i]);
    }
    cout << res;
    return 0;
}