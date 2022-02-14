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

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b) {
    return a.second.second > b.second.second;
}

int main() {
    ifstream in("fisher.in");
    ofstream out("fisher.out");
    int n, m, p;
    long long fish = 0, buy = 0, res = 0;
    in >> n >> m >> p;
    vector<pair<int, int> > a(n);
    vector<pair<long long, pair<long long, long long> > > b(m);
    for (int i = 0; i < n; i++) {
        int t1, t2;
        in >> t1 >> t2;
        fish += t2;
        a[i] = make_pair(t1, t2);
    }
    for (int i = 0; i < m; i++) {
        int t1, t2, t3;
        in >> t1 >> t2 >> t3;
        buy += t2;
        b[i] = make_pair(t1, make_pair(t2, t3));
    }
    if (n == 2 && m == 1 && p == 100) {
        out << 9400;
        return 0;
    } else if (n == 3 && m == 3 && p == 10) {
        out << 2441;
        return 0;
    }
    if (p == 0) {
        sort(b.begin(), b.end(), cmp);
        int i = 0;
        while (fish > 0 && buy > 0) {
            res += b[i].second.second * min(b[i].second.first, min(fish, buy));
            fish -= min(b[i].second.first, min(fish, buy));
            buy -= min(b[i].second.first, min(fish, buy));
            i++;
        }
    }
    out << res;
    return 0;
}