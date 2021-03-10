#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    ordered_set<long long> first, second;
    for (auto &i : a) {
        cin >> i;
        second.insert(i);
    }
    if (n < 3) {
        cout << 0;
        return 0;
    }
    second.erase(second.lower_bound(a[0] - 1));
    long long res = 0;
    for (int j = 1; j < n - 1; j++) {
        first.insert(a[j - 1]);
        second.erase(second.lower_bound(a[j] - 1));
        res += (long long)first.order_of_key(a[j]) *
               (long long)((int)second.size() -
                           (int)second.order_of_key(a[j] + 1));
    }
    cout << res;
    return 0;
}
