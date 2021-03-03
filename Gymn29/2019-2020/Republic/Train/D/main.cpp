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

vector<int> parent, r;

int find_set(int a) {
    if (a == parent[a]) {
        return a;
    }
    return parent[a] = find_set(parent[a]);
}

void unite(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (r[a] < r[b]) {
            swap(a, b);
        }
        parent[b] = a;
        r[a] += r[b];
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k;
    in >> n >> m >> k;
    r.resize(n, 1);
    parent.resize(n);
    iota(parent.begin(), parent.end(), 0);
    long long sum = 0, cost = 0;
    vector<pair<int, pair<int, int> > > g(m + k);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        in >> a >> b >> c;
        sum += c;
        a--;
        b--;
        g[i] = {c, {a, b}};
    }
    for (int i = 0; i < k; i++) {
        int a, b, c;
        in >> a >> b >> c;
        a--;
        b--;
        g[m + i] = {c, {a, b}};
    }
    sort(g.begin(), g.end());
    for (int i = 0; i < m + k; i++) {
        int a = g[i].second.first, b = g[i].second.second, c = g[i].first;
        if (find_set(a) != find_set(b)) {
            cost += c;
            unite(a, b);
        }
    }
    out << max(cost - sum, 0LL);
    return 0;
}