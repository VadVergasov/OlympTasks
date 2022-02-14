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
#define MAXN (int)10e5

using namespace std;

int comp = 0;
bool used[MAXN];
vector<vector<int> > a;
vector<vector<pair<long, long> > > cmps;
vector<pair<long, long> > cmp;

bool compor(vector<pair<long, long> > a, vector<pair<long, long> > b) {
    return a.size() > b.size();
}

void dfs(int v) {
    used[v] = true;
    cmp.push_back(make_pair(v, a[v].size()));
    for (int i = 0; i < a[v].size(); i++) {
        int to = a[v][i];
        if (!used[to]) {
            dfs(to);
        }
    }
}

void findcmp(int n) {
    for (int i = 0; i < n; i++) {
        used[i] = false;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            cmp.clear();
            dfs(i);
            cmps.push_back(cmp);
            comp++;
        }
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, tmp1, tmp2, res1 = 0, res2 = 0;
    in >> n >> m >> k;
    a.resize(n, vector<int>(0));
    for (int i = 0; i < m; i++) {
        in >> tmp1 >> tmp2;
        a[tmp1 - 1].push_back(tmp2 - 1);
        a[tmp2 - 1].push_back(tmp1 - 1);
    }
    findcmp(n);
    res1 = max(comp - k, 1);
    res2 = comp;
    sort(cmps.begin(), cmps.end(), compor);
    for (int i = 0; i < cmps.size() && k > 0; i++) {
        int sum = 0;
        for (int j = 0; j < cmps[i].size(); j++) {
            sum += cmps[i][j].second;
            cmps[i][j].second = cmps[i].size() - 1;
        }
        sum /= 2;
        k -= cmps[i].size() * (cmps[i].size() - 1) / 2 - sum;
    }
    int i = 0, sz = cmps[i].size(), s = 0;
    for (int j = 0; j < cmps[i].size(); j++) {
        s += cmps[i][j].second;
    }
    while (k > 0 && i < n) {
        long long sum = cmps[i + 1].size() * (cmps[i + 1].size() - 1) / 2 +
                        sz * (sz - 1) / 2;
        sz += cmps[i + 1].size();
        k -= sz * (sz - 1) / 2 - sum;
        res2--;
        i++;
    }
    out << res1 << " " << res2;
    return 0;
}
