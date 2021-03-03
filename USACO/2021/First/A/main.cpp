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

void dfs(int v, vector<vector<int> > &g, vector<bool> &used, long long &res) {
    used[v] = true;
    if (v == 0) {
        res += ceil(log2((g[v].size() + 1)));
    } else {
        res += ceil(log2(((int)g[v].size())));
    }
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (!used[g[v][i]]) {
            res++;
            dfs(g[v][i], g, used, res);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > g(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    long long res = 0;
    vector<bool> used(n, false);
    dfs(0, g, used, res);
    cout << res;
    return 0;
}
