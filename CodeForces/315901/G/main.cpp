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
    ifstream cin("distance.in");
    ofstream cout("distance.out");
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    s--;
    f--;
    vector<vector<pair<int, int>>> g(n);
    vector<int> d(n, 1e9), p(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    priority_queue<pair<int, int>> q;
    q.push({0, s});
    d[s] = 0;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.top().second, l = -q.top().first;
        q.pop();
        if (l > d[v]) {
            continue;
        }
        for (int j = 0; j < (int)g[v].size(); j++) {
            if (d[v] + g[v][j].second < d[g[v][j].first]) {
                d[g[v][j].first] = d[v] + g[v][j].second;
                p[g[v][j].first] = v;
                q.push({-d[g[v][j].first], g[v][j].first});
            }
        }
    }
    cout << d[f] << "\n";
    vector<int> res;
    int cur = f;
    while (cur != -1) {
        res.push_back(cur + 1);
        cur = p[cur];
    }
    reverse(res.begin(), res.end());
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
