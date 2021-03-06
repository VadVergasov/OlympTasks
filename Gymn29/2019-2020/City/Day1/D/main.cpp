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
    vector<int> h;
};

int main() {
    int n;
    cin >> n;
    vector<pair<char, char> > a(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a[i] = make_pair(s.front(), s.back());
    }
    vector<vector<int> > g(n);
    for (int i = 0; i < n; i++) {
        char to = a[i].second;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (a[j].first == to) {
                g[i].push_back(j);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int odd = 0, even = 0;
        e start;
        start.v = i;
        start.h = vector<int>(1, i);
        queue<e> q;
        q.push(start);
        while (!q.empty()) {
            e now;
            now = q.front();
            bool not_last = false;
            for (int j = 0; j < g[now.v].size(); j++) {
                bool was = false;
                for (int k = 0; k < now.h.size(); k++) {
                    if (g[now.v][j] == now.h[k]) {
                        was = true;
                        break;
                    }
                }
                if (!was) {
                    not_last = true;
                    e next;
                    next.v = g[now.v][j];
                    next.h = now.h;
                    next.h.push_back(next.v);
                    q.push(next);
                }
            }
            if (!not_last) {
                if (now.h.size() % 2 == 1) {
                    odd++;
                } else {
                    even++;
                }
            }
            q.pop();
        }
        if (even == 0) {
            cout << "Artem";
            return 0;
        }
    }
    cout << "Boris";
    return 0;
}