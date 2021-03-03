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

long long res, ans;
vector<short int> used(100001);
int n, m, x, y;
vector<long long> c(100001);
vector<vector<int> > graph(100001);

void dfs(long long v) {
    used[v] = 1;
    res = min(res, c[v]);
    for (int i = 0; i < graph[v].size(); i++) {
        if (!used[graph[v][i]]) {
            dfs(graph[v][i]);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            res = 1000000000;
            dfs(i);
            ans += res;
        }
    }
    cout << ans;
    return 0;
}
