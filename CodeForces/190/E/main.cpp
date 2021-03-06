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

vector<int> dfs(int v, set<int> &not_used, vector<vector<int> > &g,
                vector<bool> &used) {
    not_used.erase(v);
    used[v] = true;
    vector<int> ans;
    for (int i = 0; i < g[v].size() - 1; i++) {
        auto left = not_used.lower_bound(g[v][i] + 1);
        if (left == not_used.end()) {
            continue;
        }
        if (*left < g[v][i + 1]) {
            ans.push_back(dfs(*left, not_used, g, used));
        }
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > res;
    vector<vector<int> > g(n + 2);
    vector<bool> used(n + 2, false);
    set<int> not_used;
    for (int i = 0; i < m; i++) {
        g[m + 1].push_back(0);
        g[m + 1].push_back(n + 1);
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        not_used.insert(m + 1);
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            res.push_back(dfs(i, not_used, g, used));
        }
    }
    return 0;
}
