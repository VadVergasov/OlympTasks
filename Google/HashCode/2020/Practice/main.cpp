#include <bits/stdc++.h>

#pragma GCC optimize("O2,unroll-loops,no-stack-protector")

using namespace std;

int main() {
    string test = "e_also_big";
    ifstream cin(test + ".in");
    ofstream out(test + ".out");
    int n, m;
    cin >> m >> n;
    vector<int> a(n);
    vector<pair<long long, set<int> > > dp(n + 1, {0, set<int>()});
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = {0, set<int>()};
    for (int i = 0; i < n; i++) {
        set<int> t;
        t.insert(i);
        if (dp[1].first < a[i]) {
            dp[1] = {a[i], t};
        }
    }
    long long res = 0;
    for (int i = 2; i <= n; i++) {
        if (i % 100 == 0) {
            cout << i << "\n";
        }
        for (int j = 0; j < n; j++) {
            if (dp[i - 1].first + a[j] > m) {
                continue;
            }
            if (dp[i - 1].second.find(j) != dp[i - 1].second.end()) {
                continue;
            }
            set<int> t = dp[i - 1].second;
            t.insert(j);
            if (dp[i].first < (dp[i - 1].first + a[j])) {
                dp[i] = {dp[i - 1].first + a[j], t};
            }
            res = max(res, dp[i].first);
        }
    }
    cout << (double)clock() / (double)CLOCKS_PER_SEC;
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i].first == res) {
            out << dp[i].second.size() << "\n";
            for (auto j : dp[i].second) {
                out << j << " ";
            }
            return 0;
        }
    }
    return 0;
}