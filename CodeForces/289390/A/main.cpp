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
    int n, m;
    cin >> n >> m;
    vector<int> p(n), ranks(n, 1);
    for (int i = 0; i < n; i++) {
        p[i] = i;
    }
    for (int i = 0; i < m; i++) {
        string s;
        int a, b;
        cin >> s >> a >> b;
        a--;
        b--;
        if (s == "union") {
            unite(a, b, p, ranks);
        } else {
            cout << ((get_parent(a, p) == get_parent(b, p)) ? "YES" : "NO")
                 << '\n';
        }
    }
    return 0;
}
