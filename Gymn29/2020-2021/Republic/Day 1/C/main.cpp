#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("tune=native")

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, greater<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    set<int> s;
    for (int i = 0; i < 1e7; i++) {
        s.insert(i);
    }
    vector<int> req(1e8);
    for (int i = 0; i < 1e8; i++) {
        req[i] = rand() % (int)1e9;
    }
    int TMP = 0;
    double start = clock();
    for (int i = 0; i < 1e8; i++) {
        if (s.find(req[i]) != s.end()) {
            TMP--;
        }
    }
    cout << (clock() - start) / CLOCKS_PER_SEC << "\n";
    start = clock();
    for (int i = 0; i < 1e8; i++) {
        if (s.count(req[i])) {
            TMP--;
        }
    }
    cout << (clock() - start) / CLOCKS_PER_SEC << "\n";
}