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

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, res = 0;
    in >> n >> m;
    vector<vector<int> > a(n + 2, vector<int>(m + 2, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] = 1;
        }
    }
    int k;
    in >> k;
    for (int i = 0; i < k; i++) {
        int tmp1, tmp2;
        in >> tmp1 >> tmp2;
        a[tmp1][tmp2] = 0;
    }
    queue<pair<int, int> > q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] != 0) {
                a[i][j] = 0;
                q.push(make_pair(i, j));
                while (!q.empty()) {
                    pair<int, int> tmp = q.front();
                    q.pop();
                    for (int k = 0; k < 4; k++) {
                        int x = tmp.first + dx[k], y = tmp.second + dy[k];
                        if (a[x][y] != 0) {
                            q.push(make_pair(x, y));
                            a[x][y] = 0;
                        }
                    }
                }
                res++;
            }
        }
    }
    out << res;
    return 0;
}
