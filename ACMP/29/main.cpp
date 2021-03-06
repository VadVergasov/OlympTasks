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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    vector<long long> dp(30001, 0);
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);
    dp[2] = min(dp[1] + abs(a[2] - a[1]), 3 * abs(a[2] - a[0]));
    for (int i = 3; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]),
                    dp[i - 2] + 3 * abs(a[i] - a[i - 2]));
    }
    out << dp[n - 1];
    return 0;
}
