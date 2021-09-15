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
    for (int q = 0; q < 11; q++) {
        ifstream in("input" + to_string(q) + ".txt");
        ofstream out("output" + to_string(q) + ".txt");
        int n;
        in >> n;
        string s, s1;
        in >> s;
        s1 = s;
        reverse(s1.begin(), s1.end());
        vector<vector<int> > dp(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1[j - 1] == s[i - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        int x = n, y = n;
        string res = "";
        while (x > 0 && y > 0) {
            if (s1[y - 1] == s[x - 1] && (dp[x][y] - 1 == dp[x - 1][y - 1])) {
                res += s1[y - 1];
                y--;
                x--;
            } else if (dp[x][y - 1] >= dp[x - 1][y]) {
                y--;
            } else {
                x--;
            }
        }
        out << res;
    }
    return 0;
}
