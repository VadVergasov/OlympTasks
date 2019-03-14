#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, b, a1, m;
    cin >> n >> a1 >> k >> b >> m;
    vector<int> a(n), dp(n + 1, 1e9);
    dp[0] = -1e9;
    a[0] = a1;
    for (int i = 1; i < n; i++) {
        a[i] = (a[i - 1] * k + b) % m;
    }
    for (int i = 0; i < n; i++) {
        int j = upper_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
        if (dp[j - 1] < a[i] && a[i] < dp[j]) {
            dp[j] = a[i];
        }
    }
    cout << dp.back();
    return 0;
}