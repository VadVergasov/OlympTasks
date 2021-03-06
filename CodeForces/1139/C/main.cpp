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

vector<vector<pair<int, int> > > g;
vector<bool> used;

int s = 0;

const int mod = 1e9 + 7;

void dfs(int v) {
    if (used[v]) {
        return;
    }
    s++;
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i].first]) {
            dfs(g[v][i].first);
        }
    }
}

long long pw(int n, int p) {
    long long res = 1;
    for (int i = 0; i < p; i++) {
        res *= n;
        res %= mod;
    }
    return res;
}

int main() {
    int n, k, red = 0;
    cin >> n >> k;
    g.resize(n);
    used.resize(n, false);
    for (int i = 0; i < n - 1; i++) {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (t3 == 1) {
            continue;
        }
        g[t1 - 1].push_back(make_pair(t2 - 1, t3));
        g[t2 - 1].push_back(make_pair(t1 - 1, t3));
        if (t3 == 0) {
            red++;
        }
    }
    long long res = pw(n, k);
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            s = 0;
            dfs(i);
            res = (res + mod - pw(s, k)) % mod;
        }
    }
    cout << res;
    return 0;
}