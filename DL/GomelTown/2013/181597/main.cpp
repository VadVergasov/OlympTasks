#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> q >> n;
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    vector<vector<int> > dp(n + 1, vector<int>(q + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= q; j++) {
            if (j >= a[i - 1].first) {
                dp[i][j] = max(dp[i - 1][j],
                               dp[i - 1][j - a[i - 1].first] + a[i - 1].second);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][q];
    return 0;
}