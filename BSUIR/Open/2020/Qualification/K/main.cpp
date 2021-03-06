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
    long long n;
    cin >> n;
    vector<int> dec;
    vector<int> dig{4, 6, 7, 9, 0};
    while (n) {
        dec.push_back(n % 10);
        n /= 10;
    }
    n = dec.size();
    reverse(begin(dec), end(dec));
    vector<vector<long long> > dp(n + 1, vector<long long>(2));
    dp[0][1] = 1;
    for (int i = 0; i < n; ++i) {
        for (int fl = 0; fl < 2; ++fl) {
            for (auto x : dig) {
                if ((x > dec[i] && fl == 1)) {
                    continue;
                }
                dp[i + 1][fl & (x == dec[i])] += dp[i][fl];
            }
        }
    }
    cout << dp[n][1] + dp[n][0] << '\n';
    return 0;
}