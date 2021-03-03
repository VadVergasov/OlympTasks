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

vector<int> f;
vector<vector<pair<int, int> > > g;
vector<bool> used;
long long res = 0;

void dfs(int v, int fuel, int s) {
    if (used[v]) {
        return;
    }
    used[v] = true;
    fuel += f[v];
    for (int i = 0; i < g[v].size(); i++) {
        if (fuel - g[v][i].second > -1 && g[v][i].first != s) {
            cout << "\n"
                 << v + 1 << " " << g[v][i].first + 1 << " " << fuel << "\n";
            dfs(g[v][i].first, fuel - g[v][i].second, s);
        } else {
            if (s != v) {
                cout << s + 1 << " " << v + 1 << "\n";
                res++;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    f.resize(n);
    g.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        g[t1 - 1].push_back(make_pair(t2 - 1, t3));
        g[t2 - 1].push_back(make_pair(t1 - 1, t3));
    }
    for (int i = 0; i < n; i++) {
        used.clear();
        used.resize(n, false);
        dfs(i, 0, i);
    }
    cout << res;
    return 0;
}