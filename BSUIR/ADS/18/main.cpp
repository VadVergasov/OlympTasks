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

vector<vector<int> > a;
vector<bool> used;

void dfs(int v) {
    if (used[v]) {
        return;
    }
    used[v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        if (!used[a[v][i]]) {
            dfs(a[v][i]);
        }
    }
}

int main() {
    int n, m, res = 0;
    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        a[t1 - 1].push_back(t2 - 1);
        a[t2 - 1].push_back(t1 - 1);
    }
    used.resize(n, false);
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            res++;
            dfs(i);
        }
    }
    if (res > 1) {
        cout << -1;
    } else {
        cout << m - n + 1;
    }
    return 0;
}