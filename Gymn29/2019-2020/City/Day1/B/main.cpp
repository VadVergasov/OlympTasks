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

struct e {
    int v;
    vector<int> l, h;
};

int main() {
    ifstream in("input.txt");
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int> > > g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        char c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back(make_pair(b, c - 'a'));
        g[b].push_back(make_pair(a, c - 'a'));
    }
    for (int i = 0; i < n; i++) {
        e start;
        start.v = i;
        start.l = vector<int>(0);
        start.h = vector<int>(1, i);
        queue<e> q;
        q.push(start);
        while (!q.empty()) {
            e now = q.front();
            bool res = true;
            if (now.l.size() % 2 == 1 || now.l.size() == 0) {
                res = false;
            }
            for (int j = 0; j < now.l.size() / 2 && res; j++) {
                if (now.l[j] != now.l[j + now.l.size() / 2]) {
                    res = false;
                }
            }
            if (res) {
                cout << now.h.size() << "\n";
                for (auto j : now.h) {
                    cout << j + 1 << " ";
                }
                return 0;
            }
            for (int j = 0; j < g[now.v].size(); j++) {
                bool was = false;
                for (int k = 0; k < now.h.size(); k++) {
                    if (g[now.v][j].first == now.h[k]) {
                        was = true;
                        break;
                    }
                }
                if (!was) {
                    e next;
                    next.v = g[now.v][j].first;
                    next.l = now.l;
                    next.l.push_back(g[now.v][j].second);
                    next.h = now.h;
                    next.h.push_back(next.v);
                    q.push(next);
                }
            }
            q.pop();
        }
    }
    cout << -1;
    return 0;
}