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

vector<int> parent, rang;

void new_set(int v) {
    parent[v] = v;
    rang[v] = v;
}

int find(int v) {
    if (v == parent[v]) {
        return v;
    }
    return parent[v] = find(parent[v]);
}

void uni(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (rang[a] < rang[b]) {
            swap(a, b);
        }
        parent[b] = a;
        if (rang[a] == rang[b]) {
            rang[a]++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    parent.resize(n);
    rang.resize(n);
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++) {
        long long t;
        cin >> t;
        a[i] = make_pair(t, i);
    }
    vector<pair<long long, pair<int, int>>> c;
    for (int i = 0; i < m; i++) {
        long long t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        c.push_back(make_pair(min(t3, a[t1 - 1].first + a[t2 - 1].first),
                              make_pair(t1 - 1, t2 - 1)));
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
        c.push_back(make_pair(a[0].first + a[i].first,
                              make_pair(a[0].second, a[i].second)));
    }
    long long res = 0;
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    for (int i = 0; i < c.size(); i++) {
        int f = c[i].second.first, s = c[i].second.second;
        long long w = c[i].first;
        if (find(f) != find(s)) {
            res += w;
            uni(f, s);
        }
    }
    cout << res;
    return 0;
}
