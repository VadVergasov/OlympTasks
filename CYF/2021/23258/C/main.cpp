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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

int find_set(int a, vector<int> &parent) {
    if (parent[a] == a) {
        return a;
    }
    return parent[a] = find_set(parent[a], parent);
}

void unite(int a, int b, vector<int> &sz, vector<int> &parent,
           vector<ordered_set> &g) {
    a = find_set(a, parent);
    b = find_set(b, parent);
    if (a != b) {
        if (sz[a] < sz[b]) {
            swap(a, b);
        }
        for (auto i : g[b]) {
            g[a].insert(i);
        }
        parent[b] = a;
        sz[a]++;
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> sz(n, 1), parent(n);
    vector<ordered_set> g(n);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        g[i].insert(i);
    }
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            unite(x, y, sz, parent, g);
        } else {
            int x;
            cin >> x;
            x--;
            cout << (*g[find_set(x, parent)].find_by_order(
                        ceil((double)g[parent[x]].size() / 2.0) - 1)) +
                        1
                 << "\n";
        }
    }
    return 0;
}
