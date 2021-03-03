"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int dx[8] = {2, -2, 2, -2, 1, 1, -1, -1};
int dy[8] = {1, 1, -1, -1, 2, -2, 2, -2};

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    char t1, t2;
    int x1, x2, y1, y2;
    in >> t1 >> y1 >> t2 >> y2;
    x1 = t1 - 'A' + 1;
    x2 = t2 - 'A' + 1;
    queue<pair<pair<int, int>, int> > q;
    q.push(make_pair(make_pair(x1, y1), 0));
    while (q.front().first != make_pair(x2, y2)) {
        for (int i = 0; i < 8; i++) {
            if (q.front().first.first + dx[i] <= 0 ||
                q.front().first.second + dy[i] <= 0 ||
                q.front().first.first + dx[i] > 8 ||
                q.front().first.second + dy[i] > 8) {
                continue;
            }
            q.push(make_pair(make_pair(q.front().first.first + dx[i],
                                       q.front().first.second + dy[i]),
                             q.front().second + 1));
        }
        q.pop();
    }
    out << q.front().second;
    return 0;
}
