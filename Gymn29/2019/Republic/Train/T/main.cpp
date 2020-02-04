#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<long long, int>, null_type, less<pair<long long, int> >,
             rb_tree_tag, tree_order_statistics_node_update>
    ordered_set;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    ordered_set a, b;
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        a.insert({t, 0});
    }
    for (int i = 0; i < m; i++) {
        int t;
        in >> t;
        b.insert({t, 0});
    }
    int i = 1, additional = 0;
    long long res = 0;
    while (a.size() > 0 && b.size() > 0) {
        long long first = a.begin()->first, second = b.begin()->first;
        if (first > second) {
            pair<long long, int> nw = {first + second, i};
            b.erase(b.begin());
            a.erase(a.begin());
            a.insert(nw);
            res += a.order_of_key(nw) + 1;
        } else if (first < second) {
            pair<long long, int> nw = {first + second, i};
            b.erase(b.begin());
            a.erase(a.begin());
            b.insert(nw);
            res += b.order_of_key(nw) + 1;
        } else if (first == second) {
            if (i % 2 == 1) {
                pair<long long, int> nw = {first + second, i};
                b.erase(b.begin());
                a.erase(a.begin());
                a.insert(nw);
                res += a.order_of_key(nw) + 1;
            } else if (i % 2 == 0) {
                pair<long long, int> nw = {first + second, i};
                b.erase(b.begin());
                a.erase(a.begin());
                b.insert(nw);
                res += b.order_of_key(nw) + 1;
            }
            additional++;
        }
        i++;
    }
    out << res;
    return 0;
}