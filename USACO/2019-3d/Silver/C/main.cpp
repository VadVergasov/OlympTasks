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

vector<vector<pair<int, int> > > a;
vector<bool> used;
vector<char> color;

bool dfs(int v, int c) {
    used[v] = true;
    color[v] = c;
    for (int i = 0; i < a[v].size(); i++) {
        if (color[a[v][i].first] != 2) {
            if (a[v][i].second == -1 && color[a[v][i].first] == c) {
                return false;
            } else if (a[v][i].second == 1 && color[a[v][i].first] != c) {
                return false;
            }
        }
        if (color[a[v][i].first] == 2) {
            if (a[v][i].second == -1) {
                if (!dfs(a[v][i].first, 1 - c)) {
                    return false;
                }
            } else {
                if (!dfs(a[v][i].first, c)) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    ifstream in("revegetate.in");
    ofstream out("revegetate.out");
    string res = "";
    int n, m;
    in >> n >> m;
    a.resize(n);
    used.resize(n, false);
    color.resize(n, 2);
    for (int i = 0; i < m; i++) {
        char t;
        int t1, t2;
        in >> t >> t1 >> t2;
        if (t == 'D') {
            a[t1 - 1].push_back(make_pair(t2 - 1, -1));
            a[t2 - 1].push_back(make_pair(t1 - 1, -1));
        } else {
            a[t1 - 1].push_back(make_pair(t2 - 1, 1));
            a[t2 - 1].push_back(make_pair(t1 - 1, 1));
        }
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            bool r = dfs(i, 1);
            if (r) {
                if (res == "") {
                    res = "10";
                } else {
                    res += "0";
                }
            } else {
                out << 0;
                return 0;
            }
        }
    }
    out << res;
    return 0;
}