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

int main() {
    int h, w;
    cin >> w >> h;
    vector<vector<char> > a(h + 2, vector<char>(w + 2, '*'));
    vector<vector<bool> > used(h + 2, vector<bool>(w + 2, false));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> a[i][j];
        }
    }
    vector<pair<int, int> > d = {{1, 0}, {-1, 0}, {0, 1},  {0, -1},
                                 {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
    int res = 0;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (!used[i][j] && a[i][j] == '.') {
                queue<pair<int, int> > q;
                q.push({i, j});
                int r = 0;
                while (!q.empty()) {
                    pair<int, int> now = q.front();
                    for (auto k : d) {
                        if (now.first + k.first > 0 &&
                            now.first + k.first <= h &&
                            now.second + k.second > 0 &&
                            now.second + k.second <= w &&
                            !used[now.first + k.first][now.second + k.second] &&
                            a[now.first + k.first][now.second + k.second] ==
                                '.') {
                            used[now.first + k.first][now.second + k.second] =
                                true;
                            q.push(
                                {now.first + k.first, now.second + k.second});
                        }
                    }
                    r++;
                    q.pop();
                }
                if (r == 1) {
                    r++;
                }
                res = max(res, r - 1);
            }
        }
    }
    cout << res;
    return 0;
}