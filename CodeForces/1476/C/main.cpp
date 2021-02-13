#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> c(n), a(n), b(n);
        for (auto &i : c) {
            cin >> i;
        }
        for (auto &i : a) {
            cin >> i;
        }
        for (auto &i : b) {
            cin >> i;
        }
        vector<long long> dp(n, 0);
        for (int i = 1; i < n; i++) {
            if (b[i] == a[i]) {
                dp[i] = c[i] + 1;
                continue;
            }
            dp[i] = max(dp[i - 1] + c[i] + 1 - abs(b[i] - a[i]),
                        c[i] + abs(b[i] - a[i]) + 1);
        }
        long long res = 0;
        for (auto i : dp) {
            res = max(res, i);
        }
        cout << res << "\n";
    }
    return 0;
}
