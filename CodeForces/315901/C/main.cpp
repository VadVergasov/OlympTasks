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

bool f = false;

void dfs(int v, vector<vector<pair<int, int> > > &g, vector<bool> &used,
         vector<int> &p) {
    used[v] = true;
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (!used[g[v][i].first]) {
            p[g[v][i].first] = v;
            dfs(g[v][i].first, g, used, p);
        } else if (g[v][i].first != p[g[v][i].first] &&
                   g[v][i].first != (int)g.size() - 1) {
            f = true;
        }
    }
}

int main() {
    ifstream cin("maze.in");
    ofstream cout("maze.out");
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int> > > g(n);
    vector<vector<int> > d(n, vector<int>(n));
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        d[a][b] = max(d[a][b], c);
        g[a].push_back({b, c});
    }
    vector<bool> used(n);
    vector<int> p(n);
    p[0] = -1;
    dfs(0, g, used, p);
    if (!used[n - 1]) {
        cout << ":(";
        return 0;
    }
    if (f) {
        cout << ":)";
        return 0;
    }
    int res = 0, cur = n - 1;
    while (cur != -1) {
        if (cur == 0) {
            break;
        }
        res += d[p[cur]][cur];
        cur = p[cur];
    }
    cout << res;
    return 0;
}
