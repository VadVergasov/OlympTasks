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

int get_parent(int a, vector<int> &p) {
    if (p[a] == a) {
        return a;
    }
    return p[a] = get_parent(p[a], p);
}

void unite(int a, int b, vector<int> &p, vector<int> &ranks,
           vector<pair<int, int> > &sets) {
    a = get_parent(a, p);
    b = get_parent(b, p);
    if (a != b) {
        if (ranks[a] < ranks[b]) {
            swap(a, b);
        }
        p[b] = a;
        ranks[a] += ranks[b];
        sets[a].first = min(sets[a].first, sets[b].first);
        sets[a].second = max(sets[a].second, sets[b].second);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> p(n), ranks(n, 1);
    vector<pair<int, int> > sets(n);
    for (int i = 0; i < n; i++) {
        p[i] = i;
        sets[i].first = i + 1;
        sets[i].second = i + 1;
    }
    for (int i = 0; i < m; i++) {
        string s;
        int a;
        cin >> s >> a;
        a--;
        if (s == "union") {
            int b;
            cin >> b;
            b--;
            unite(a, b, p, ranks, sets);
        } else {
            cout << sets[get_parent(a, p)].first << " "
                 << sets[get_parent(a, p)].second << " "
                 << ranks[get_parent(a, p)] << '\n';
        }
    }
    return 0;
}
