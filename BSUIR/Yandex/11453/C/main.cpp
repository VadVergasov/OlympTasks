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

const int mod = 1000000007;

int main() {
    ifstream in("binary.in");
    ofstream out("binary.out");
    int n;
    in >> n;
    string s;
    in >> s;
    vector<long long> dp(n + 1, 0);
    long long sum = 0;
    int pos = 0;
    for (int i = n - 1; i > 0; i--) {
        if (s[i] == '1') {
            dp[i - 1] = 1;
            pos = i;
            break;
        }
    }
    for (int i = pos - 1; i > 0; i--) {
        sum += dp[i + 1];
        if (s[i] == '1') {
            dp[i - 1] = sum + 1;
            sum %= mod;
            cout << i << " " << dp[i - 1] << " " << sum << "\n";
        }
    }
    out << dp.front();
    return 0;
}