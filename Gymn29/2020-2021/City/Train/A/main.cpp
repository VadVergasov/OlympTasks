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

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k;
    in >> n >> m >> k;
    set<int> starts;
    for (int i = 0; i < m; i++) {
        int t;
        in >> t;
        starts.insert(t);
    }
    vector<vector<int> > g(n);
    for (int i = 0; i < n; i++) {
        int a;
        in >> a;
        a--;
        g[a].push_back(i);
    }
    int finish, res = 0;
    in >> finish;
    finish--;
    vector<bool> used(n, false);
    queue<pair<int, int> > q;
    q.push({finish, 0});
    used[finish] = true;
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        if (cur.second >= k) {
            continue;
        }
        for (int i = 0; i < g[cur.first].size(); i++) {
            if (!used[g[cur.first][i]]) {
                if (starts.find(g[cur.first][i]) != starts.end()) {
                    res++;
                }
                used[g[cur.first][i]] = true;
                q.push({g[cur.first][i], cur.second++});
            }
        }
    }
    out << res;
    return 0;
}
