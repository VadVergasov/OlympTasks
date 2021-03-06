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

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

struct e {
    pair<int, int> cur;
    vector<pair<int, int> > history;
    int sum = 0;
};

const vector<pair<int, int> > d = {{0, 1},  {0, -1},  {1, 0},
                                   {-1, 0}, {-1, -1}, {1, 1}};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, cur = 0;
    vector<vector<int> > triangle(502, vector<int>(502, -1));
    for (int i = 1; i < 501; i++) {
        triangle[i][i] = 1;
        triangle[i][1] = 1;
    }
    for (int i = 3; i < 501; i++) {
        for (int j = 2; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    cin >> t;
    while (cur++ < t) {
        int n;
        cin >> n;
        e start;
        start.cur = {1, 1};
        start.sum = 1;
        queue<e> q;
        q.push(start);
        while (!q.empty()) {
            e now = q.front();
            q.pop();
            if (now.history.size() > 499) {
                continue;
            }
            if (now.sum == n) {
                cout << "Case #" << cur << ":\n";
                for (auto i : now.history) {
                    cout << i.first << " " << i.second << "\n";
                }
                cout << now.cur.first << " " << now.cur.second << "\n";
                break;
            }
            for (auto i : d) {
                if (triangle[now.cur.first + i.first]
                            [now.cur.second + i.second] != -1) {
                    bool was = false;
                    for (int j = (int)now.history.size() - 1; j >= 0; j--) {
                        if (now.history[j] ==
                            make_pair(now.cur.first + i.first,
                                      now.cur.second + i.second)) {
                            was = true;
                            break;
                        }
                    }
                    if (was) {
                        continue;
                    }
                    e next = now;
                    next.history.push_back(now.cur);
                    next.cur = {now.cur.first + i.first,
                                now.cur.second + i.second};
                    next.sum += triangle[now.cur.first + i.first]
                                        [now.cur.second + i.second];
                    q.push(next);
                }
            }
        }
    }
    return 0;
}