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

int main() {
    ifstream in("revegetate.in");
    ofstream out("revegetate.out");
    int n, m;
    in >> n >> m;
    vector<vector<int> > g(n);
    int a, b;
    vector<vector<int> > u(n, vector<int>(4, 0));
    for (int i = 0; i < m; i++) {
        in >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (!u[i][j]) {
                out << j + 1;
                for (int r = 0; r < g[i].size(); r++) {
                    u[g[i][r]][j] = 1;
                }
                break;
            }
        }
    }
    return 0;
}