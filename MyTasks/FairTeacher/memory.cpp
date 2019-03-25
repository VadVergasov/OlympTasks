#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), r(n);
    vector<vector<long long> > dp(n, vector<long long>(k, 0));
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        if (i >= a[0]) {
            dp[0][i] = r[0];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (a[i] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + r[i]);
            }
        }
    }
    cout << dp.back().back();
    return 0;
}