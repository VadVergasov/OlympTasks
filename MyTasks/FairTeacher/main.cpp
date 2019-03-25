#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    long long res = 0;
    cin >> n >> k;
    vector<int> a(n), r(n);
    vector<long long> dp(k, 0);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = k - 1; j >= 0; j--) {
            if (j + a[i] >= k) {
                continue;
            }
            dp[j + a[i]] = max(dp[j + a[i]], dp[j] + r[i]);
        }
    }
    for (int i = 0; i < k; i++) {
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}