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

short int dir[24][4][2] = {
    {{1, 0}, {0, 1}, {-1, 0}, {0, -1}}, {{1, 0}, {0, 1}, {0, -1}, {-1, 0}},
    {{1, 0}, {0, -1}, {-1, 0}, {0, 1}}, {{1, 0}, {0, -1}, {0, 1}, {-1, 0}},
    {{1, 0}, {-1, 0}, {0, -1}, {0, 1}}, {{1, 0}, {-1, 0}, {0, 1}, {0, -1}},
    {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}, {{-1, 0}, {1, 0}, {0, 1}, {0, -1}},
    {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}, {{-1, 0}, {0, 1}, {0, -1}, {1, 0}},
    {{-1, 0}, {0, -1}, {1, 0}, {0, 1}}, {{-1, 0}, {0, -1}, {0, 1}, {1, 0}},
    {{0, 1}, {1, 0}, {-1, 0}, {0, -1}}, {{0, 1}, {1, 0}, {0, -1}, {-1, 0}},
    {{0, 1}, {-1, 0}, {1, 0}, {0, -1}}, {{0, 1}, {-1, 0}, {0, -1}, {1, 0}},
    {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}, {{0, 1}, {0, -1}, {-1, 0}, {1, 0}},
    {{0, -1}, {1, 0}, {-1, 0}, {0, 1}}, {{0, -1}, {1, 0}, {0, 1}, {-1, 0}},
    {{0, -1}, {-1, 0}, {1, 0}, {0, 1}}, {{0, -1}, {-1, 0}, {0, 1}, {1, 0}},
    {{0, -1}, {0, 1}, {1, 0}, {-1, 0}}, {{0, -1}, {0, 1}, {-1, 0}, {1, 0}}};

int main() {
    long long res = 0;
    string str;
    pair<short int, short int> s, e, now;
    char tmp;
    short int n, m;
    cin >> n >> m;
    vector<vector<char> > lab;
    lab.resize(n, {});
    for (short int i = 0; i < n; i++) {
        for (short int j = 0; j < m; j++) {
            cin >> tmp;
            lab[i].push_back(tmp);
            if (tmp == 'S') {
                s.first = i;
                s.second = j;
                now.first = i;
                now.second = j;
            } else if (tmp == 'E') {
                e.first = i;
                e.second = j;
            }
        }
    }
    cin >> str;
    for (short int i = 0; i < 24; i++) {
        for (short int j = 0; j < str.size(); j++) {
            now.first += dir[i][str[j] - '0'][0];
            now.second += dir[i][str[j] - '0'][1];
            if (now.first == e.first && now.second == e.second) {
                res++;
                break;
            }
            if (now.first < 0 || now.second < 0 || now.first >= n ||
                now.second >= m) {
                break;
            } else if (lab[now.first][now.second] != '#' ||
                       lab[now.first][now.second] == 'S') {
                continue;
            } else {
                break;
            }
        }
        now.first = s.first;
        now.second = s.second;
    }
    cout << res;
    return 0;
}
