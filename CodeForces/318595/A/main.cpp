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

#pragma GCC optimize("Ofast,unroll-loops")

using namespace std;

void build_dist(int v, vector<int> &d, vector<vector<int>> &g) {
    vector<bool> used(g.size(), false);
    d[v] = 0;
    queue<pair<int, int>> q;
    q.push({v, 0});
    used[v] = true;
    while (!q.empty()) {
        int v = q.front().first, dist = q.front().second;
        d[v] = min(dist, d[v]);
        q.pop();
        for (int i = 0; i < (int)g[v].size(); i++) {
            if (!used[g[v][i]]) {
                used[g[v][i]] = true;
                q.push({g[v][i], dist + 1});
            }
        }
    }
}

void dfs(int v, vector<int> &p, vector<vector<int>> &g, vector<bool> &used) {
    used[v] = true;
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (!used[g[v][i]]) {
            p[g[v][i]] = v;
            dfs(g[v][i], p, g, used);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> d(n, 1e9), p(n);
    vector<bool> used(n, false);
    p[0] = -1;
    dfs(0, p, g, used);
    build_dist(0, d, g);
    unordered_set<int> cand;
    int v = 0;
    cout << "d " << v + 1 << endl;
    int distance;
    cin >> distance;
    for (int i = 0; i < n; i++) {
        if (d[i] == distance) {
            cand.insert(i);
        }
    }
    while (cand.size() != 1) {
        cout << "s " << v + 1 << endl;
        int nw;
        cin >> nw;
        if (nw == -1) {
            return 0;
        }
        nw--;
        if ((int)g[nw].size() == 1) {
            cout << "! " << nw + 1 << endl;
            return 0;
        }
        while ((int)g[nw].size() == 2) {
            for (int i = 0; i < (int)g[nw].size(); i++) {
                if (g[nw][i] != p[nw]) {
                    nw = g[nw][i];
                    break;
                }
            }
        }
        v = nw;
        d.clear();
        d.resize(n, 1e9);
        build_dist(v, d, g);
        cout << "d " << v + 1 << endl;
        int distance;
        cin >> distance;
        if (distance == -1) {
            return 0;
        }
        unordered_set<int> new_cand;
        for (int i = 0; i < n; i++) {
            if (d[i] == distance && cand.find(i) != cand.end()) {
                new_cand.insert(i);
            }
        }
        cand = new_cand;
    }
    cout << "! " << *cand.begin() + 1 << endl;
    return 0;
}
