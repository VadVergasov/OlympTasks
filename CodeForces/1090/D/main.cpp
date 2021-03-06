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

vector<vector<int> > g;
vector<bool> used;
vector<vector<int> > childs;

bool dfs(int v) {
    if (used[v]) {
        return false;
    }
    used[v] = true;
    for (int i = 0; i < childs[v].size(); i++) {
        if (!dfs(childs[v][i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m, t1, t2;
    cin >> n >> m;
    g.resize(n);
    used.resize(n, false);
    childs.resize(n);
    for (int i = 0; i < m; i++) {
        cin >> t1 >> t2;
        g[t1 - 1].push_back(t2 - 1);
        g[t2 - 1].push_back(t1 - 1);
        childs[min(t2 - 1, t1 - 1)].push_back(max(t2 - 1, t1 - 1));
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = i + 1;
    }
    bool res = false;
    for (int i = 0; i < n; i++) {
        if (childs[i].size() > 1 || childs[i].size() == 0) {
            res = true;
            break;
        }
    }
    if (!res) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            if (!dfs(i)) {
                cout << "NO";
                return 0;
            }
        }
    }
    for (int i = 1; i < n; i++) {
        bool res = true;
        for (int j = 0; j < g[i].size(); j++) {
            if ((i - 1) < g[i][j] + 1 != i < g[i][j] + 1) {
                res = false;
            }
        }
        if (res) {
            cout << "YES\n";
            for (auto i : ans) {
                cout << i << " ";
            }
            cout << endl;
            ans[i]--;
            for (auto i : ans) {
                cout << i << " ";
            }
            return 0;
        }
    }
    cout << "NO";
    return 0;
}