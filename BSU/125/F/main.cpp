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

struct turn {
    string direction;
    int steps;
    char carpet1, carpet2;
};

void change_direction(pair<pair<int, int>, char> &pos, string dir) {
    if (dir == "FORWARD") {
        return;
    }
    if (pos.second == 'W') {
        if (dir == "LEFT") {
            pos.second = 'S';
        } else {
            pos.second = 'N';
        }
    } else if (pos.second == 'E') {
        if (dir == "LEFT") {
            pos.second = 'N';
        } else {
            pos.second = 'S';
        }
    } else if (pos.second == 'S') {
        if (dir == "LEFT") {
            pos.second = 'E';
        } else {
            pos.second = 'W';
        }
    } else {
        if (dir == "LEFT") {
            pos.second = 'W';
        } else {
            pos.second = 'E';
        }
    }
}

int bfs(vector<vector<pair<int, map<char, pair<pair<int, int>, char>>>>> &g,
        pair<int, int> pos, int num) {
    vector<vector<bool>> used(7, vector<bool>(7, false));
    used[pos.first][pos.second] = true;
    int cnt = 0;
    queue<pair<int, int>> q;
    q.push(pos);
    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    while (!q.empty()) {
        cnt++;
        pair<int, int> cur = q.front();
        q.pop();
        for (auto i : dir) {
            if (cur.first + i.first >= 0 && cur.first + i.first < 7 &&
                cur.second + i.second >= 0 && cur.second + i.second < 7) {
                if (g[cur.first + i.first][cur.second + i.second].first ==
                        num &&
                    !used[cur.first + i.first][cur.second + i.second]) {
                    used[cur.first + i.first][cur.second + i.second] = true;
                    q.push({cur.first + i.first, cur.second + i.second});
                }
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<turn> a(n);
    vector<vector<pair<int, map<char, pair<pair<int, int>, char>>>>> g(
        7, vector<pair<int, map<char, pair<pair<int, int>, char>>>>(7));
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            g[i][j].second['W'] = {{i, j - 1}, 'W'};
            g[i][j].second['E'] = {{i, j + 1}, 'E'};
            g[i][j].second['S'] = {{i + 1, j}, 'S'};
            g[i][j].second['N'] = {{i - 1, j}, 'N'};
        }
    }
    for (int i = 1; i < 6; i++) {
        g[i][0].second['E'] = {{i, 1}, 'E'};
        g[i][0].second['S'] = {{i + 1, 0}, 'S'};
        g[i][0].second['N'] = {{i - 1, 0}, 'N'};

        g[0][i].second['W'] = {{0, i - 1}, 'W'};
        g[0][i].second['E'] = {{0, i + 1}, 'E'};
        g[0][i].second['S'] = {{1, i}, 'S'};

        g[i][6].second['W'] = {{i, 5}, 'W'};
        g[i][6].second['S'] = {{i + 1, 6}, 'S'};
        g[i][6].second['N'] = {{i - 1, 6}, 'N'};

        g[6][i].second['W'] = {{6, i - 1}, 'W'};
        g[6][i].second['E'] = {{6, i + 1}, 'E'};
        g[6][i].second['N'] = {{5, i}, 'N'};
    }
    for (int i = 1; i < 6; i += 2) {
        g[0][i].second['N'] = {{0, i - 1}, 'S'};
        g[i][0].second['W'] = {{i - 1, 0}, 'E'};
        g[6][i].second['S'] = {{6, i + 1}, 'N'};
        g[i][6].second['E'] = {{i + 1, 6}, 'W'};
    }
    g[0][2].second['N'] = {{0, 3}, 'S'};
    g[0][4].second['N'] = {{0, 5}, 'S'};

    g[6][2].second['S'] = {{6, 1}, 'N'};
    g[6][4].second['S'] = {{6, 3}, 'N'};

    g[2][0].second['W'] = {{3, 0}, 'E'};
    g[4][0].second['W'] = {{5, 0}, 'E'};

    g[2][6].second['E'] = {{1, 6}, 'W'};
    g[4][6].second['E'] = {{3, 6}, 'W'};

    g[0][0].second['N'] = {{0, 1}, 'S'};
    g[0][0].second['W'] = {{1, 0}, 'E'};
    g[0][0].second['E'] = {{0, 1}, 'E'};
    g[0][0].second['S'] = {{1, 0}, 'S'};

    g[6][6].second['N'] = {{5, 6}, 'N'};
    g[6][6].second['W'] = {{6, 5}, 'W'};
    g[6][6].second['S'] = {{6, 5}, 'N'};
    g[6][6].second['E'] = {{5, 6}, 'W'};

    g[0][6].second['W'] = {{0, 5}, 'W'};
    g[0][6].second['S'] = {{1, 6}, 'S'};
    g[0][6].second['E'] = {{0, 6}, 'S'};
    g[0][6].second['N'] = {{0, 6}, 'W'};

    g[6][0].second['N'] = {{5, 0}, 'N'};
    g[6][0].second['E'] = {{6, 1}, 'E'};
    g[6][0].second['W'] = {{6, 0}, 'N'};
    g[6][0].second['S'] = {{6, 0}, 'E'};

    for (int i = 0; i < n; i++) {
        string s;
        int b;
        char c, d;
        cin >> s >> b >> c >> d;
        a[i].direction = s;
        a[i].steps = b;
        a[i].carpet1 = c;
        a[i].carpet2 = d;
    }
    map<char, pair<int, int>> carpet;
    carpet['S'] = {1, 0};
    carpet['N'] = {-1, 0};
    carpet['W'] = {0, -1};
    carpet['E'] = {0, 1};
    pair<pair<int, int>, char> pos = {{3, 3}, 'N'};
    int cnt = 0, first = 30, second = 30;
    for (auto i : a) {
        change_direction(pos, i.direction);
        for (int j = 0; j < i.steps; j++) {
            char d =
                g[pos.first.first][pos.first.second].second[pos.second].second;
            pos.first =
                g[pos.first.first][pos.first.second].second[pos.second].first;
            pos.second = d;
        }
        if (cnt % 2 == 0) {
            if (g[pos.first.first][pos.first.second].first == 2) {
                int cost = bfs(g, {pos.first.first, pos.first.second}, 2);
                first -= cost;
                second += cost;
            }
            g[pos.first.first + carpet[i.carpet1].first]
             [pos.first.second + carpet[i.carpet1].second]
                 .first = 1;
            g[pos.first.first + carpet[i.carpet1].first +
              carpet[i.carpet2].first]
             [pos.first.second + carpet[i.carpet1].second +
              carpet[i.carpet2].second]
                 .first = 1;
        } else {
            if (g[pos.first.first][pos.first.second].first == 1) {
                int cost = bfs(g, {pos.first.first, pos.first.second}, 1);
                second -= cost;
                first += cost;
            }
            g[pos.first.first + carpet[i.carpet1].first]
             [pos.first.second + carpet[i.carpet1].second]
                 .first = 2;
            g[pos.first.first + carpet[i.carpet1].first +
              carpet[i.carpet2].first]
             [pos.first.second + carpet[i.carpet1].second +
              carpet[i.carpet2].second]
                 .first = 2;
        }
        cnt++;
    }
    for (auto i : g) {
        for (auto j : i) {
            if (j.first == 1) {
                first++;
            } else if (j.first == 2) {
                second++;
            }
        }
    }
    cout << first << " " << second;
    return 0;
}