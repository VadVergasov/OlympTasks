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

using namespace std;

int main() {
    ifstream in("ladder.in");
    ofstream out("ladder.out");
    int n;
    in >> n;
    vector<long long> a(n + 2, 0), dp(n + 2, INT_MIN);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        in >> a[i + 1];
    }
    int k;
    in >> k;
    for (int i = 0; i < n + 2; i++) {
        for (int j = 1; j <= min(k, n - i + 1); j++) {
            dp[i + j] = max(dp[i + j], dp[i] + a[i + j]);
        }
    }
    out << dp[n + 1];
    return 0;
}