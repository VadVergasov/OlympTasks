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
