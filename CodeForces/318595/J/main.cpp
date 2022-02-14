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

void dfs(int v, vector<bool> &used, vector<vector<int> > &g, vector<int> &srt) {
    used[v] = true;
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (!used[g[v][i]]) {
            dfs(g[v][i], used, g, srt);
        }
    }
    srt.push_back(v);
}

int main() {
    int n, q, len = 0;
    cin >> n >> q;
    vector<int> a(n);
    vector<vector<int> > g(n);
    for (auto &i : a) {
        cin >> i;
        len = max(len, (int)ceil(log2(i)));
    }
    for (int i = 0; i <= len; i++) {
        vector<int> appl;
        for (int j = 0; j < n; j++) {
            if (a[j] & (1 << i)) {
                appl.push_back(j);
            }
        }
        for (int j = 1; j < (int)appl.size(); j++) {
            g[appl[j - 1]].push_back(appl[j]);
        }
    }
    vector<bool> used(n, false);
    vector<int> srt;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            dfs(i, used, g, srt);
        }
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[srt[i] + 1] = i;
    }
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        if (mp[x] > mp[y] && a[x - 1] != 0 && a[y - 1] != 0) {
            cout << "Shi\n";
        } else {
            cout << "Fou\n";
        }
    }
    return 0;
}
