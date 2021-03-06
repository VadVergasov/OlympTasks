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

void dfs(int v, bool col, vector<int> &c, vector<bool> &used,
         vector<vector<int>> &g, vector<vector<int>> &comp) {
    used[v] = true;
    comp.back().push_back(v);
    c[v] = col;
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (!used[g[v][i]]) {
            dfs(g[v][i], !col, c, used, g, comp);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<bool> used(n, false);
    vector<int> c(n, -1);
    vector<vector<int>> comp;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            comp.push_back({});
            dfs(i, 0, c, used, g, comp);
        }
    }
    vector<pair<int, int>> colors;
    for (auto i : comp) {
        colors.push_back({});
        for (auto j : i) {
            if (c[j] == 0) {
                colors.back().first++;
            } else if (c[j] == 1) {
                colors.back().second++;
            }
        }
    }
    vector<vector<bool>> dp(n + 1,
                            vector<bool>(n / 2 * (n + 1) / 2 + 1, false));
    dp[colors[0].first][colors[0].first * colors[0].second] = true;
    dp[colors[0].second][colors[0].first * colors[0].second] = true;
    dp[0][0] = true;
    for (int i = 1; i < n; i++) {
    }
    return 0;
}
