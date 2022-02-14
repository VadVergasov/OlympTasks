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
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    vector<vector<deque<pair<int, int> > > > table(
        n, vector<deque<pair<int, int> > >(m));
    for (auto &i : a) {
        for (auto &j : i) {
            cin >> j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            table[i][j].push_back({i, j});
        }
    }
    string s;
    for (int i = 0; i < n + m - 2; i++) {
        char t;
        cin >> t;
        s += t;
    }
    vector<int> col(m, 1), str(n, 1);
    int tl = 0, tr = m - 1, tt = 0, tb = n - 1;
    for (auto i : s) {
        if (i == 'R') {
            for (int j = 0; j < n; j++) {
                while (!table[j][tr].empty()) {
                    table[j][tr - 1].push_back(table[j][tr].back());
                    table[j][tr].pop_back();
                }
            }
            for (int j = m - 1; j >= tr; j--) {
                col[j] *= -1;
            }
            tr--;
        } else if (i == 'L') {
            for (int j = 0; j < n; j++) {
                while (!table[j][tl].empty()) {
                    table[j][tl + 1].push_back(table[j][tl].back());
                    table[j][tl].pop_back();
                }
            }
            for (int j = 0; j <= tl; j++) {
                col[j] *= -1;
            }
            tl++;
        } else if (i == 'T') {
            for (int j = 0; j < m; j++) {
                while (!table[tt][j].empty()) {
                    table[tt + 1][j].push_back(table[tt][j].back());
                    table[tt][j].pop_back();
                }
            }
            for (int j = 0; j <= tt; j++) {
                str[j] *= -1;
            }
            tt++;
        } else {
            for (int j = 0; j < m; j++) {
                while (!table[tb][j].empty()) {
                    table[tb - 1][j].push_back(table[tb][j].back());
                    table[tb][j].pop_back();
                }
            }
            for (int j = n - 1; j >= tb; j--) {
                str[j] *= -1;
            }
            tb--;
        }
    }
    vector<int> res;
    while (!table[tt][tl].empty()) {
        pair<int, int> cur = table[tt][tl].back();
        table[tt][tl].pop_back();
        if (a[cur.first][cur.second] * str[cur.first] * col[cur.second] > 0) {
            res.push_back(a[cur.first][cur.second] * str[cur.first] *
                          col[cur.second]);
        }
    }
    reverse(res.begin(), res.end());
    cout << res.size() << "\n";
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
