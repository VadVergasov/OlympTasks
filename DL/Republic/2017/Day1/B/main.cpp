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

struct e {
    int v;
    set<int> history;

    e(int a) { v = a; }
};

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, s;
    in >> n >> m >> s;
    s--;
    vector<vector<int> > g(n);
    for (int i = 0; i < m; i++) {
        int x, y;
        in >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    queue<e> q;
    e start = e(s);
    q.push(start);
    long long res = 0;
    while (!q.empty()) {
        e cur = q.front();
        q.pop();
        bool was = false;
        for (int i = 0; i < (int)g[cur.v].size(); i++) {
            if (cur.history.find(g[cur.v][i]) == cur.history.end()) {
                e next = e(g[cur.v][i]);
                next.history = cur.history;
                next.history.insert(cur.v);
                q.push(next);
                was = true;
            }
        }
        if (!was) {
            res++;
        }
    }
    out << res;
    return 0;
}