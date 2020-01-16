#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

vector<int> parent;
vector<int> r;

int find_set(int v) {
    if (parent[v] == v) {
        return v;
    }
    parent[v] = find_set(parent[v]);
    return parent[v];
}

void unite(int a, int b) {
    int f = find_set(a);
    int s = find_set(b);
    if (f != s) {
        if (r[f] < r[s]) {
            swap(f, s);
        }
        r[f]++;
        parent[s] = f;
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, q;
    in >> n >> q;
    vector<ordered_set> all(n);
    parent.resize(n);
    r.resize(n, 1);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        all[i].insert(i + 1);
    }
    for (int i = 0; i < q; i++) {
        int t;
        in >> t;
        if (t == 1) {
            int a, b;
            in >> a >> b;
            a--;
            b--;
            ordered_set l;
            int f = find_set(a), s = find_set(b);
            if (f < s) {
                swap(f, s);
            }
            unite(a, b);
            if (find_set(a) != f) {
                swap(f, s);
            }
            l = all[s];
            int i1 = 0, i2 = 0;
            for (auto j : l) {
                all[f].insert(j);
            }
        }
        if (t == 2) {
            int a;
            in >> a;
            a--;
            int cur = find_set(a);
            int m = (int)(all[cur].size() - 1) / 2;
            out << *all[cur].find_by_order(m) << "\n";
        }
    }
    return 0;
}
