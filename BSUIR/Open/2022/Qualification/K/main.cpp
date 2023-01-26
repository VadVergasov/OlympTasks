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

void dfs(int v, int p, vector<vector<int> > &g, vector<int> &bits,
         vector<vector<vector<long long> > > &dp, long long &res) {
    dp[v][bits[v]][0] = 1;
    for (auto &i : g[v]) {
        if (i == p) {
            continue;
        }
        dfs(i, v, g, bits, dp, res);
        for (short bit_to = 0; bit_to < 2; bit_to++) {
            for (short path_to = 0; path_to < 2; path_to++) {
                for (short bit_from = 0; bit_from < 2; bit_from++) {
                    for (short path_from = 0; path_from < 2; path_from++) {
                        if ((bit_to ^ bit_from ^ path_from ^ path_to) == 1) {
                            res += dp[v][bit_from][path_from] *
                                   dp[i][bit_to][path_to ^ 1];
                        }
                    }
                }
            }
        }
        for (short bit_to = 0; bit_to < 2; bit_to++) {
            for (short path_to = 0; path_to < 2; path_to++) {
                dp[v][bit_to][path_to ^ 1] += dp[i][bit_to][path_to];
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> d(n);
    vector<vector<int> > g(n);
    vector<vector<vector<long long> > > dp(
        n, vector<vector<long long> >(2, vector<long long>(2, 0)));
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
        dp[i][0][0] = 0;
        dp[i][0][1] = 0;
        dp[i][1][0] = 0;
        dp[i][1][1] = 0;
    }
    dp.back()[0][0] = 0;
    dp.back()[0][1] = 0;
    dp.back()[1][0] = 0;
    dp.back()[1][1] = 0;
    long long res = 0;
    for (auto &i : d) {
        cin >> i;
        i = __builtin_popcount(i) % 2;
    }
    dfs(0, -1, g, d, dp, res);
    cout << res;
    return 0;
}
