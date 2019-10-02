#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), dp(k + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j - a[i] < 0) {
                continue;
            }
            dp[j] += dp[j - a[i]];
        }
    }
    cout << dp[k];
    return 0;
}