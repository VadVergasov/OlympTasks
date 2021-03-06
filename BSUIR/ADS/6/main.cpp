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

vector<vector<pair<long long, long long> > > a;
vector<long long> d;

int main() {
    long long n, m;
    cin >> n >> m;
    a.resize(n);
    d.resize(n, 1000000000000);
    for (long long i = 0; i < m; i++) {
        long long t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        a[t1 - 1].push_back(make_pair(t2 - 1, t3));
        a[t2 - 1].push_back(make_pair(t1 - 1, t3));
    }
    long long s, e;
    cin >> s >> e;
    s--;
    e--;
    d[s] = 0;
    set<pair<long long, long long> > q;
    q.insert(make_pair(d[s], s));
    while (!q.empty()) {
        long long v = q.begin()->second;
        q.erase(q.begin());
        for (long long i = 0; i < a[v].size(); i++) {
            long long next = a[v][i].first;
            long long len = a[v][i].second;
            if (d[v] + len < d[next]) {
                q.erase(make_pair(d[next], next));
                d[next] = d[v] + len;
                q.insert(make_pair(d[next], next));
            }
        }
    }
    cout << d[e];
    return 0;
}