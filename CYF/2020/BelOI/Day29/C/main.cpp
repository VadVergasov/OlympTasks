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

bool dfs(int i, int j, vector<vector<tuple<bool, bool, bool, bool>>> &f,
         vector<vector<bool>> &used) {
    used[i][j] = true;
    bool res = false;
    if (get<2>(f[i][j]) && !used[i][j + 1] && j < f[i].size() - 1) {
        dfs(i, j + 1, f, used);
        res = true;
    }
    if (get<3>(f[i][j]) && !used[i][j - 1] && j > 1) {
        dfs(i, j - 1, f, used);
        res = true;
    }
    if (get<0>(f[i][j]) && !used[i + 1][j] && i < f.size() - 1) {
        dfs(i + 1, j, f, used);
        res = true;
    }
    if (get<1>(f[i][j]) && !used[i - 1][j] && i > 1) {
        dfs(i - 1, j, f, used);
        res = true;
    }
    return res;
}

int main() {
    ifstream in("repair.in");
    int n, a, b, q;
    in >> a >> b >> n >> q;
    swap(a, b);
    vector<vector<tuple<bool, bool, bool, bool>>> f(
        a + 2, vector<tuple<bool, bool, bool, bool>>(
                   b + 2, make_tuple(false, false, false, false)));
    for (int i = 0; i < n - 1; i++) {
        char t;
        int x, y;
        in >> t >> x >> y;
        swap(x, y);
        if (t == 'h') {
            get<2>(f[x][y]) = true;
            get<3>(f[x][y]) = true;
            get<2>(f[x][y + 1]) = true;
            get<3>(f[x][y + 1]) = true;
            get<2>(f[x][y - 1]) = true;
            get<3>(f[x][y - 1]) = true;
        } else {
            get<0>(f[x][y]) = true;
            get<1>(f[x][y]) = true;
            get<0>(f[x + 1][y]) = true;
            get<1>(f[x + 1][y]) = true;
            get<0>(f[x - 1][y]) = true;
            get<1>(f[x - 1][y]) = true;
        }
    }
    for (int t = 0; t < q; t++) {
        int x1, x2, y1, y2;
        in >> x1 >> y1 >> x2 >> y2;
        swap(x1, y1);
        swap(x2, y2);
        vector<vector<bool>> used(a + 2, vector<bool>(b + 2, false));
        int res = 0;
        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                if (!used[i][j]) {
                    if (dfs(i, j, f, used)) {
                        res++;
                    }
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}