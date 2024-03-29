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
// https://codeforces.com/problemset/problem/793/B
#include <bits/stdc++.h>

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    pair<int, int> start, end;
    vector<pair<int, int> > d = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<char> > a(n + 2, vector<char>(m + 2, '*'));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'S') {
                start = {i, j};
            }
            if (a[i][j] == 'T') {
                end = {i, j};
            }
        }
    }
    queue<pair<pair<int, int>, pair<int, int> > > q;
    q.push({start, {0, 0}});
    while (!q.empty()) {
        pair<pair<int, int>, pair<int, int> > cur = q.front();
        q.pop();
        if (cur.second.second > 2) {
            continue;
        }
        if (cur.first == end) {
            cout << "YES";
            return 0;
        }
        for (auto [f, s] : d) {
            if (a[cur.first.first + f][cur.first.second + s] == '*') {
                continue;
            }
            int dir = 0, count = cur.second.second;
            if (f == 1 && s == 0 && cur.second.first != 1 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == -1 && s == 0 && cur.second.first != 3 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == 0 && s == 1 && cur.second.first != 2 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == 0 && s == -1 && cur.second.first != 4 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == 1 && s == 0) {
                dir = 1;
            }
            if (f == -1 && s == 0) {
                dir = 3;
            }
            if (f == 0 && s == 1) {
                dir = 2;
            }
            if (f == 0 && s == -1) {
                dir = 4;
            }
            if (dir == 3 && cur.second.first == 1 ||
                cur.second.first == 3 && dir == 1) {
                continue;
            }
            if (dir == 2 && cur.second.first == 4 ||
                dir == 4 && cur.second.first == 2) {
                continue;
            }
            if (count > 2) {
                continue;
            }
            q.push({{cur.first.first + f, cur.first.second + s}, {dir, count}});
        }
    }
    cout << "NO";
    return 0;
}