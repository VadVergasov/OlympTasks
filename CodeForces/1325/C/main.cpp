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
// https://codeforces.com/contest/1325/problem/C
#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<int> &tin, int t, vector<vector<int> > &g,
         vector<bool> &used) {
    used[v] = true;
    tin[v] = t;
    t++;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i]]) {
            dfs(g[v][i], tin, t, g, used);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > g(n);
    vector<int> p(n);
    p[0] = -1;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
        p[v] = u;
    }
    vector<int> tin(n);
    vector<bool> used(n, false);
    int time = 0;
    dfs(0, tin, time, g, used);
    for (auto i : tin) {
        cout << i << " ";
    }
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        a[i] = {tin[i], i};
    }
    sort(rbegin(a), rend(a));
    int num = n - 2;
    for (int i = 0; i < n; i++) {
        }
    return 0;
}