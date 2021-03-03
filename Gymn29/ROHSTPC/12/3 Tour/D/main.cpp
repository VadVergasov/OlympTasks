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

int main() {
    ios_base::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    set<pair<int, int> > cells;
    vector<vector<int> > bad(n + 2, vector<int>(m + 2, 0));
    cells.insert(make_pair(1, 1));
    cells.insert(make_pair(n, m));
    while (cells.size() < n + m - 1) {
        string s = "";
        auto j = cells.begin();
        pair<int, int> last = {1, 1}, cur = {1, 1};
        int dx = 0, dy = 0;
        set<pair<int, int> > path;
        path.insert(cur);
        bool f = true;
        while (s.size() < n + m - 2) {
            if (bad[cur.first][cur.second + 1] == 1) {
                f = false;
            }
            if (dx > 0 && f && bad[cur.first][cur.second + 1] == 0) {
                s += "R";
                dx--;
                cur.second++;
                path.insert(cur);
                if (dx == ((*j).second - last.second) -
                              ((*j).second - last.second) / 2 ||
                    dx == 0) {
                    f = false;
                }
            } else if (dy > 0 && !f) {
                s += "D";
                dy--;
                cur.first++;
                path.insert(cur);
                if (dy == ((*j).first - last.first) -
                              ((*j).first - last.first) / 2 ||
                    dy == 0) {
                    f = true;
                }
            }
            if (cur == (*j)) {
                last.first = (*j).first;
                last.second = (*j).second;
                j++;
                dx = ((*j).first - last.first);
                dy = ((*j).second - last.second);
                swap(dx, dy);
            }
            cout << dx << " " << dy << endl;
        }
        cout << "? " << s << endl;
        fflush(stdout);
        int t;
        cin >> t;
        for (int k = 0; k < t; k++) {
            int t1, t2;
            cin >> t1 >> t2;
            cells.insert(make_pair(t1, t2));
        }
        for (auto i : path) {
            if (cells.find(i) == cells.end()) {
                bad[i.first][i.second] = 1;
            }
        }
    }
    string res = "";
    for (auto i = cells.begin(); i != cells.end(); i++) {
        if ((*i).first == n && (*i).second == m) {
            break;
        }
        auto j = i;
        j++;
        if ((*i).first == (*j).first && (*i).second + 1 == (*j).second) {
            res += "R";
        } else {
            res += "D";
        }
    }
    cout << "! " << res << endl;
    fflush(stdout);
    return 0;
}