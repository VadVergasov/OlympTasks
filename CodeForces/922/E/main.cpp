#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, w, b, x, res = 0;
    cin >> n >> w >> b >> x;
    vector<long long> c(n), cost(n);
    for (auto &i : c) {
        cin >> i;
    }
    for (auto &i : cost) {
        cin >> i;
    }
    vector<vector<long long> > dp(n + 1, vector<long long>(1e4 + 1, -1));
    dp[0][0] = w;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 1e4 + 1; j++) {
            long long mx = w + j * b;
            for (int k = 0; k <= min((long long)j, c[i - 1]); k++) {
                if (dp[i - 1][j - k] != -1) {
                    if (min(mx, min((j - k) * b + w, dp[i - 1][j - k] + x) -
                                    cost[i - 1] * k) >= 0) {
                        dp[i][j] = max(
                            dp[i][j],
                            min(mx, min((j - k) * b + w, dp[i - 1][j - k] + x) -
                                        cost[i - 1] * k));
                        mx += b;
                        res = max(res, (long long)j);
                    }
                }
            }
        }
    }
    cout << res;
    return 0;
}