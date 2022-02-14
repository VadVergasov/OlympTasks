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

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

using namespace std;

int get_parent(int a, vector<int> &p) {
    if (p[a] == a) {
        return a;
    }
    return p[a] = get_parent(p[a], p);
}

void unite(int a, int b, vector<int> &p, vector<int> &ranks,
           vector<pair<int, int> > &exp, vector<vector<int> > &comps) {
    a = get_parent(a, p);
    b = get_parent(b, p);
    if (a != b) {
        if (ranks[a] < ranks[b]) {
            swap(a, b);
        }
        for (auto i : comps[b]) {
            comps[a].push_back(i);
            exp[i].first += exp[b].second - exp[a].second;
        }
        exp[get_parent(b, p)].second = 0;
        p[b] = a;
        ranks[a]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> p(n), ranks(n, 1);
    vector<pair<int, int> > exp(n, {0, 0});
    vector<vector<int> > comps(n);
    for (int i = 0; i < n; i++) {
        p[i] = i;
        comps[i].push_back(i);
    }
    for (int i = 0; i < m; i++) {
        string s;
        int a;
        cin >> s >> a;
        a--;
        if (s == "join") {
            int b;
            cin >> b;
            b--;
            unite(a, b, p, ranks, exp, comps);
        } else if (s == "get") {
            cout << exp[a].first + exp[get_parent(a, p)].second << '\n';
        } else {
            int b;
            cin >> b;
            exp[get_parent(a, p)].second += b;
        }
    }
    return 0;
}
