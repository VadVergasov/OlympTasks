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
// https://codeforces.com/group/kubgwEbWlB/contest/208394/problem/B
#include <bits/stdc++.h>

using namespace std;

const vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> a(n + 2, vector<char>((m << 1) + 1, '*')), b;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (m << 1) - 1; j++) {
            cin >> a[i][j];
        }
    }
    b = a;
    vector<vector<int>> ans(n - 2);
    for (int i = 2; i < n; i++) {
        for (int j = 1; j <= (m << 1) - 1; j += 2) {
            int cnt = 0;
            b = a;
            queue<pair<pair<int, int>, int>> q;
            pair<pair<int, int>, int> start = {{i, j}, 0};
            q.push(start);
            while (!q.empty()) {
                pair<pair<int, int>, int> now = q.front();
                q.pop();
                if (now.second > k) {
                    continue;
                }
                if (a[now.first.first][now.first.second] == 't') {
                    cnt++;
                    a[now.first.first][now.first.second] = '.';
                }
                for (auto [f, s] : d) {
                    if (a[now.first.first + f][now.first.second + s] == '*') {
                        continue;
                    }
                    q.push({{now.first.first + f, now.first.second + s},
                            now.second + 1});
                }
            }
            ans[i - 2].push_back(cnt);
        }
    }
    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}