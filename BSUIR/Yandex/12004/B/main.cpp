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

vector<bool> used;
vector<vector<int> > g;

void dfs(int v, int l, int r) {
    if (used[v]) {
        return;
    }
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i]] && g[v][i] >= l && g[v][i] <= r) {
            dfs(g[v][i], l, r);
            // cout << g[v][i] << " into\n";
        }
    }
}

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        long long res = 0;
        int n;
        cin >> n;
        g.resize(n);
        for (int i = 0; i < n - 1; i++) {
            int t1, t2;
            cin >> t1 >> t2;
            g[t1 - 1].push_back(t2 - 1);
            g[t2 - 1].push_back(t1 - 1);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                used.clear();
                used.resize(n, false);
                int comp = 0;
                // cout << "Deleted " << i << " " << j << "\n";
                for (int k = i; k < j; k++) {
                    if (!used[k]) {
                        // cout << "Not used " << k << "\n";
                        comp++;
                        dfs(k, i, j);
                    }
                }
                // cout << comp << "\n";
                if (comp == 1 || comp == 0) {
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}