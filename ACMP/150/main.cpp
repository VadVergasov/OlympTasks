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
vector<vector<int> > a;

int dfs(int v, int cur) {
    if (used[v]) {
        return cur;
    }
    used[v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        if (!used[i] && a[v][i] == 1) {
            cur = dfs(i, cur + 1);
        }
    }
    return cur;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, s;
    in >> n >> s;
    a.resize(n, vector<int>(n));
    used.resize(n, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> a[i][j];
        }
    }
    out << dfs(s - 1, 0);
    return 0;
}