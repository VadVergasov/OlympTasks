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

int get_parent(int a, vector<int> &p) {
    if (p[a] == a) {
        return a;
    }
    return p[a] = get_parent(p[a], p);
}

void unite(int a, int b, vector<int> &p, vector<int> &ranks) {
    a = get_parent(a, p);
    b = get_parent(b, p);
    if (a != b) {
        if (ranks[a] < ranks[b]) {
            swap(a, b);
        }
        p[b] = a;
        ranks[a]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> p(n), ranks(n, 1);
    for (int i = 0; i < n; i++) {
        p[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
    }
    vector<pair<string, pair<int, int> > > q(k);
    for (int i = 0; i < k; i++) {
        string s;
        int a, b;
        cin >> s >> a >> b;
        a--;
        b--;
        q[i] = {s, {a, b}};
    }
    vector<string> s;
    for (int i = k - 1; i >= 0; i--) {
        if (q[i].first == "ask") {
            s.push_back((get_parent(q[i].second.first, p) ==
                         get_parent(q[i].second.second, p))
                            ? "YES"
                            : "NO");
        } else {
            unite(q[i].second.first, q[i].second.second, p, ranks);
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i] << '\n';
    }
    return 0;
}
