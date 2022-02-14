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

struct e {
    int v;
    vector<int> h;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > g(n);
    vector<bool> used(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
    }
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    c--;
    queue<e> q;
    e start;
    start.v = a;
    start.h = {a};
    used[a] = true;
    q.push(start);
    while (!q.empty()) {
        e now = q.front();
        bool f = false, s = false;
        for (int i = 0; i < now.h.size(); i++) {
            if (now.h[i] == c && !s) {
                f = true;
            }
            if (now.h[i] == b && f) {
                cout << now.h.size() << "\n";
                for (int j = 0; j < now.h.size(); j++) {
                    cout << now.h[j] + 1 << "\n";
                }
                return 0;
            }
        }
        for (int i = 0; i < g[now.v].size(); i++) {
            if (!used[g[now.v][i]]) {
                e next;
                next.v = g[now.v][i];
                next.h = now.h;
                next.h.push_back(g[now.v][i]);
                q.push(next);
            }
        }
        q.pop();
    }
    cout << -1;
    return 0;
}