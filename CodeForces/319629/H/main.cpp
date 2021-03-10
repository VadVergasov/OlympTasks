#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, res = 0;
    cin >> n;
    vector<int> a(n);
    set<int> all;
    for (auto &i : a) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        all.insert(t);
    }
    for (auto i : a) {
        auto cur = all.upper_bound(i);
        if (cur != all.end()) {
            res++;
            all.erase(cur);
        }
    }
    cout << res;
    return 0;
}
