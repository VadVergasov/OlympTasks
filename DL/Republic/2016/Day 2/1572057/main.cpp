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

const vector<pair<pair<int, int>, char>> dirs = {
    {{1, 0}, 'D'}, {{-1, 0}, 'U'}, {{0, 1}, 'R'}, {{0, -1}, 'L'}};

struct mv {
    string path;
    pair<int, int> cur;
    set<pair<int, int>> h;
    long long sum;
};

int main() {
    for (int u = 0; u <= 10; u++) {
        cout << u << '\n';
        ifstream in("input" + to_string(u) + ".txt");
        ofstream out("output" + to_string(u) + ".txt");
        int r, c, t;
        in >> r >> c >> t;
        pair<int, int> start;
        vector<vector<char>> a(4 * r + 3, vector<char>(2 * c + 7, '#'));
        for (int i = 1; i <= 4 * r + 1; i++) {
            for (int j = 1; j <= 2 * c + 5; j++) {
                in >> a[i][j];
                if (a[i][j] == 'B') {
                    start = {i, j};
                }
            }
        }
        deque<mv> q;
        string ans = "";
        long long res = 0;
        mv s;
        s.path = "";
        s.cur = start;
        s.sum = 0;
        q.push_back(s);
        while (!q.empty()) {
            mv cur = q.front();
            q.pop_front();
            if (isdigit(a[cur.cur.first][cur.cur.second])) {
                cur.sum += (a[cur.cur.first][cur.cur.second] - '0');
            }
            if ((int)cur.path.size() == t / 2) {
                if (res < cur.sum) {
                    res = cur.sum;
                    ans = cur.path;
                }
                continue;
            }
            for (auto [f, s] : dirs) {
                if (a[cur.cur.first + f.first][cur.cur.second + f.second] !=
                        '#' &&
                    (cur.h.find({cur.cur.first + f.first,
                                 cur.cur.second + f.second}) == cur.h.end() ||
                     isdigit(a[cur.cur.first][cur.cur.second]))) {
                    mv next = cur;
                    next.path += s;
                    next.cur = {cur.cur.first + f.first,
                                cur.cur.second + f.second};
                    next.h.insert(cur.cur);
                    q.push_back(next);
                }
            }
            q.shrink_to_fit();
        }
        for (int i = 0; i < t / 2; i++) {
            if (ans[i] == 'R') {
                ans += 'L';
            }
            if (ans[i] == 'L') {
                ans += 'R';
            }
            if (ans[i] == 'U') {
                ans += 'D';
            }
            if (ans[i] == 'D') {
                ans += 'U';
            }
        }
        out << ans << "\n";
    }
    return 0;
}
