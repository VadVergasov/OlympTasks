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
    ifstream cin("path.in");
    ofstream cout("path.out");
    int n, m, s;
    cin >> n >> m >> s;
    s--;
    vector<pair<long long, pair<int, int> > > g(m);
    vector<long long> d(n, 1e18);
    vector<int> p(n, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[i] = {c, {a, b}};
    }
    d[s] = 0;
    int x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (d[g[j].second.first] < 1e18) {
                d[g[j].second.second] = min(d[g[j].second.second],
                                            d[g[j].second.first] + g[j].first);
                x = g[j].second.second;
                p[g[j].second.second] = g[j].second.first;
            }
        }
    }
    vector<int> cycle;
    if (x != -1) {
    }
    for (int i = 0; i < n; i++) {
        if (d[i] == 1e18) {
            cout << "*\n";
            continue;
        }
        cout << d[i] << "\n";
    }
    return 0;
}
