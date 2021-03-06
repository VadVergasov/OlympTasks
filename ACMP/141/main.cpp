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

vector<vector<int> > a;
vector<bool> used;

void dfs(int v) {
    if (used[v]) {
        return;
    }
    used[v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        if (!used[i] && a[v][i] == 1) {
            dfs(i);
        }
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m = 0;
    in >> n;
    a.resize(n, vector<int>(n));
    used.resize(n, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> a[i][j];
            if (a[i][j] == 1) {
                m++;
            }
        }
    }
    int comp = 0;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            comp++;
            dfs(i);
        }
    }
    if (comp == 1 && m / 2 == n - 1) {
        out << "YES";
    } else {
        out << "NO";
    }
    return 0;
}