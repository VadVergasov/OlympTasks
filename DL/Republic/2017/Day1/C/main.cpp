#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k;
    in >> n >> m >> k;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    vector<int> keys(k);
    for (auto &i : keys) {
        in >> i;
    }
    vector<int> res(k, 0);
    ordered_set t;
    for (int j = 0; j < m; j++) {
        t.insert(a[j]);
    }
    for (int i = 0; i < k; i++) {
        res[i] = max(res[i], *t.find_by_order(keys[i] - 1));
    }
    for (int j = m; j < n; j++) {
        t.erase(a[j - m]);
        t.insert(a[j]);
        for (int j = 0; j < k; j++) {
            res[j] = max(res[j], *t.find_by_order(keys[j] - 1));
        }
    }
    for (auto i : res) {
        out << i << " ";
    }
    return 0;
}