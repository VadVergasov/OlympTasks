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
vector<char> color;

void dfs(int v, int c) {
    if (used[v]) {
        return;
    }
    used[v] = true;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    used.resize(n, false);
    color.resize(n, 2);
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int t1, t2;
        in >> t1 >> t2;
        a[t1 - 1].push_back(t2 - 1);
        a[t2 - 1].push_back(t1 - 1);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            res++;
            dfs(i, 0);
        }
    }
    if (res > 2) {
        out << "NO";
    } else {
        out << "YES";
    }
    return 0;
}