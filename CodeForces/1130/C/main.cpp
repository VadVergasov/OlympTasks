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

vector<vector<char> > g;
vector<vector<bool> > used, used1;
vector<pair<int, int> > dirs = {
    make_pair(0, 1),
    make_pair(0, -1),
    make_pair(1, 0),
    make_pair(-1, 0),
};

bool dfs(int x, int y, int ex, int ey) {
    queue<pair<int, int> > q;
    q.push(make_pair(x, y));
    used[x][y] = true;
    while (!q.empty()) {
        int x1 = q.front().first, y1 = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            if (g[x1 + dirs[i].first][y1 + dirs[i].second] == '0' &&
                !used[x1 + dirs[i].first][y1 + dirs[i].second]) {
                q.push(make_pair(x1 + dirs[i].first, y1 + dirs[i].second));
                used[x1 + dirs[i].first][y1 + dirs[i].second] = true;
            }
        }
    }
    if (used[ex][ey]) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int r1, r2, c1, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    g.resize(n + 2, vector<char>(n + 2, '1'));
    used.resize(n + 2, vector<bool>(n + 2, false));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
        }
    }
    bool ret = dfs(r1, c1, r2, c2);
    if (ret) {
        cout << 0;
    } else {
        int res = 1000000;
        used1 = used;
        used.clear();
        used.resize(n + 2, vector<bool>(n + 2, false));
        dfs(r2, c2, r1, c1);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (used1[i][j]) {
                    for (int k = 1; k <= n; k++) {
                        for (int z = 1; z <= n; z++) {
                            if (used[k][z]) {
                                res = min(
                                    res, (i - k) * (i - k) + (j - z) * (j - z));
                            }
                        }
                    }
                }
            }
        }
        cout << res;
    }
    return 0;
}