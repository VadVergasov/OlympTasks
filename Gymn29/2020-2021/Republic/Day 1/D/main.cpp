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
#define ll long long
#define fi first
#define se second

using namespace std;

struct dinic {
    struct edge {
        int v, u, cap, flow;
    };
    int n, s, t;
    vector<edge> e;
    vector<vector<int> > gr;

    void add(int v, int u, int cap) {
        e.push_back(edge{v, u, cap, 0});
        e.push_back(edge{u, v, 0, 0});
        gr[v].push_back(e.size() - 2);
        gr[u].push_back(e.size() - 1);
    }

    queue<int> q;
    vector<int> d, ptr;

    void prepare(int n, int s, int t) {
        this->s = s, this->t = t; this->n = n;
        gr.resize(n);
        d.resize(n);
        ptr.resize(n);
    }

    bool bfs() {
        d.assign(d.size(), -1);
        d[s] = 0;
        q.push(s);
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int id = 0; id < gr[v].size(); ++id) {
                int u = e[gr[v][id]].u, cap = e[gr[v][id]].cap,
                    flow = e[gr[v][id]].flow;
                if (d[u] == -1 && flow - cap > 0) {
                    d[u] = d[v] + 1;
                    q.push(u);
                }
            }
        }
        return (d[t] != -1);
    }
    int dfs(int v, int flow1 = 1e9) {
        if (!flow1) return 0;
        if (v == t) return flow1;
        for (int &id = ptr[v]; id < gr[v].size(); ++id) {
            int ID = gr[v][id];
            auto [u, to, cap, flow] = e[ID];

            if (d[to] != d[v] + 1) continue;
            int push = dfs(to, min(flow1, cap - flow));
        }
    }

    int mx_flow() {
        int flow = 0;
        while (bfs()) {
            ptr.assign(ptr.size(), 0);
            while (int x = dfs(s)) flow += x;
        }
        return flow;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pair<pair<int, int>, string> > v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].fi.fi >> v[i].fi.se;
        cin >> v[i].se; --v[i].fi.fi, --v[i].fi.se;
    }

    int ver = 26 + m + 100; int s = ver - 5, t = ver - 6;
    dinic d; d.prepare(ver, s, t);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < v[i].se.size(); ++j) {
            d.add(v[i].se[j] - 'a', 27 + v[i].fi.fi + j, 1);
        }
    }
    for (int i = 0; i < 26; ++i) d.add(s, i, 1e9);
    for (int i = 27; i < 27 + n; ++i) d.add(i, t, 1e9);

    cout << d.mx_flow();
}
