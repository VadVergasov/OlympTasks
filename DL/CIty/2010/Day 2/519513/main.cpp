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

vector<vector<char> > a;
int dir[4] = {0, 0, 0, 0};
vector<int> len;

void solve(pair<int, int> a, pair<int, int> b) {}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    char tmp;
    for (int i = 0; i < k; i++) {
        cin >> tmp;
        if (tmp == 'L') {
            dir[3] = 1;
        } else if (tmp == 'R') {
            dir[2] = 1;
        } else if (tmp == 'D') {
            dir[1] = 1;
        } else {
            dir[0] = 1;
        }
    }
    pair<int, int> s, f;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            a[i].push_back(tmp);
            if (tmp == 'S') {
                s = make_pair(i, j);
            } else if (tmp == 'F') {
                s = make_pair(i, j);
                s
            }
        }
    }

    return 0;
}
