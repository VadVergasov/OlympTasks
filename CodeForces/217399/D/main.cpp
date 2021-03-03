"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<vector<int> > &g, vector<vector<int> > &p,
         vector<int> &tin, vector<int> &tout, int &timer, int parent,
         int &len) {
    timer++;
    tin[v] = timer;
    p[v][0] = parent;
    for (int i = 1; i <= len; i++) {
        p[v][i] = p[p[v][i - 1]][i - 1];
    }
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (g[v][i] != parent) {
            dfs(g[v][i], g, p, tin, tout, timer, v, len);
        }
    }
    timer++;
    tout[v] = timer;
}

bool up(int a, int b, vector<int> &tin, vector<int> &tout) {
    return tin[a] <= tin[b] && tout[a] >= tout[b];
}

int lca(int a, int b, vector<int> &tin, vector<int> &tout,
        vector<vector<int> > &p, int &len) {
    if (up(a, b, tin, tout)) {
        return a;
    }
    if (up(b, a, tin, tout)) {
        return b;
    }
    for (int i = len; i >= 0; i--) {
        if (!up(p[a][i], b, tin, tout)) {
            a = p[a][i];
        }
    }
    return p[a][0];
}

int main() {
    int n, m;
    cin >> n >> m;
    int len = 0, timer = 0;
    while ((1 << len) <= n) {
        len++;
    }
    vector<vector<int> > g(n), p(n, vector<int>(len + 1));
    vector<int> tin(n), tout(n);
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0, g, p, tin, tout, timer, 0, len);
    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;
        int f = lca(a, b, tin, tout, p, len), s = lca(c, d, tin, tout, p, len);
        if (up(f, c, tin, tout) &&
                (up(s, a, tin, tout) || up(s, b, tin, tout)) ||
            up(f, d, tin, tout) &&
                (up(s, a, tin, tout) || up(s, b, tin, tout)) ||
            up(s, a, tin, tout) &&
                (up(f, c, tin, tout) || up(f, d, tin, tout)) ||
            up(s, b, tin, tout) &&
                (up(f, c, tin, tout) || up(f, d, tin, tout))) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}