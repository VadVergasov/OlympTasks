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

void dfs(int v, int path, int start, vector<vector<pair<int, int>>> &g,
         vector<vector<int>> &res, vector<bool> &used) {
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i].first]) {
            res[start][g[v][i].first] = path ^ g[v][i].second;
            dfs(g[v][i].first, path ^ g[v][i].second, start, g, res, used);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> g(n);
    vector<vector<int>> res(n, vector<int>(n));
    vector<bool> used(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++) {
        vector<bool> used(n, false);
        dfs(i, 0, i, g, res, used);
    }
    long long ans = 0;
    for (auto i : res) {
        for (auto j : i) {
            if (j == 0) {
                ans++;
            }
        }
    }
    cout << ans - (ans - n) / 2;
    return 0;
}
