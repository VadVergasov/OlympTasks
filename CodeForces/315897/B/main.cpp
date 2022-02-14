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

#pragma GCC optimize("Ofast,unroll-loops")

using namespace std;

pair<int, int> get_coords(int number, int &n, int &m) {
    return {number / m + 1, number - number / m * m + 1};
}

int get_number(int x, int y, int &n, int &m) { return (x - 1) * m + y - 1; }

int get_parent(int a, vector<int> &p) {
    if (p[a] == a) {
        return a;
    }
    return p[a] = get_parent(p[a], p);
}

void unite(int a, int b, vector<int> &p, vector<int> &sz) {
    a = get_parent(a, p);
    b = get_parent(b, p);
    if (a != b) {
        if (sz[b] > sz[a]) {
            swap(a, b);
        }
        p[b] = a;
        sz[a]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    ifstream cin("bees.in");
    ofstream cout("bees.out");
    cin.tie(0);
    cout.tie(0);
    int n, m, p1, p2;
    cin >> n >> m >> p1 >> p2;
    vector<pair<int, pair<int, int>>> g;
    vector<int> p(n * m), sz(n * m, 1);
    for (int i = 0; i < n * m; i++) {
        p[i] = i;
    }
    g.reserve(3 * n * m);
    for (int i = 0; i < n * m; i++) {
        pair<int, int> cur = get_coords(i, n, m);
        if (cur.second + 1 <= m) {
            g.push_back({((cur.first * cur.first) +
                          p1 * cur.second * (cur.second + 1)) %
                             p2,
                         {i, get_number(cur.first, cur.second + 1, n, m)}});
        }
        if (cur.second + 1 <= m && cur.first + 1 <= n) {
            g.push_back({((cur.first * (cur.first + 1)) +
                          p1 * cur.second * (cur.second + 1)) %
                             p2,
                         {i, get_number(cur.first + 1, cur.second + 1, n, m)}});
        }
        if (cur.first + 1 <= n) {
            g.push_back({((cur.first * (cur.first + 1)) +
                          p1 * cur.second * (cur.second)) %
                             p2,
                         {i, get_number(cur.first + 1, cur.second, n, m)}});
        }
    }
    int res = 0;
    sort(g.begin(), g.end());
    for (int i = 0; i < (int)g.size(); i++) {
        int from = g[i].second.first, to = g[i].second.second;
        int cost = g[i].first;
        if (get_parent(from, p) != get_parent(to, p)) {
            res += cost;
            unite(from, to, p, sz);
        }
    }
    cout << res;
    return 0;
}
