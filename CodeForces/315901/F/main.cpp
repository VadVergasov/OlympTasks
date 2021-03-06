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
    ifstream cin("dijkstra.in");
    ofstream cout("dijkstra.out");
    int n, s, f;
    cin >> n >> s >> f;
    f--;
    s--;
    vector<vector<int> > g(n, vector<int>(n));
    vector<long long> d(n, 1e9);
    d[s] = 0;
    for (auto &i : g) {
        for (auto &j : i) {
            cin >> j;
            if (j == -1) {
                j = 1e9;
            }
        }
    }
    priority_queue<pair<int, int> > q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second, l = -q.top().first;
        q.pop();
        if (l > d[v]) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (d[v] + g[v][j] < d[j]) {
                d[j] = d[v] + g[v][j];
                q.push({-d[j], j});
            }
        }
    }
    if (d[f] == 1e9) {
        d[f] = -1;
    }
    cout << d[f];
    return 0;
}
