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

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < n; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        x--;
        y--;
        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }
    vector<vector<long long>> d(n);
    for (int i = 0; i < n; i++) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       less<pair<int, int>>>
            q;
        q.push({0, i});
        while (!q.empty()) {
            int w = q.top().first, x = q.top().second;
            q.pop();
            if (w > d[i][x]) {
                continue;
            }
            for (int j = 0; j < g[x].size(); j++) {
                int next = g[x][j].first, len = g[x][j].second;
                if (d[i][x] + len < d[i][next]) {
                    d[i][next] = d[i][x] + len;
                    q.push({d[x][next], next});
                }
            }
        }
    }
    return 0;
}
