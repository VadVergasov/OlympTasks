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

int main() {
    int n, m, res = 0;
    cin >> n >> m;
    vector<pair<char, pair<int, int> > > r;
    vector<vector<int> > a(n, vector<int>(m)), b(n, vector<int>(m)),
        c(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = b[i][j] - a[i][j];
            if (c[i][j] < 0) {
                cout << -1;
                return 0;
            }
        }
    }
    set<int> q, w;
    for (int i = 0; i < n; i++) {
        if (c[i][0] == 1) {
            r.push_back(make_pair('R', make_pair(i + 1, 1)));
            for (int j = 0; j < m; j++) {
                c[i][j]--;
            }
            res++;
        } else if (c[i][0] > 1) {
            q.insert(i);
            res++;
        }
    }
    for (int i = 0; i < m; i++) {
        if (c[0][i] == 1) {
            r.push_back(make_pair('C', make_pair(i + 1, 1)));
            for (int j = 0; j < n; j++) {
                c[j][i]--;
            }
            res++;
        } else if (c[0][i] > 1) {
            w.insert(i);
            res++;
        }
    }
    cout << res << "\n";
    for (auto i : q) {
        int mn = 0;
        for (int j = 0; j < m; j++) {
            if (w.find(j) != w.end()) {
            }
        }
    }
    for (int i = 0; i < r.size(); i++) {
        cout << r[i].first << " " << r[i].second.first << " "
             << r[i].second.second << "\n";
    }
    return 0;
}
