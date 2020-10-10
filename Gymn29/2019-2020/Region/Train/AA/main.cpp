#include <bits/stdc++.h>

using namespace std;

int main() {
    int q1, p1, q2, p2, a;
    cin >> q1 >> p1 >> q2 >> p2 >> a;
    vector<int> dp(a + q2 + q1 + 1, 10e7);
    dp[q1] = p1;
    dp[0] = 0;
    for (int i = 1; i <= a + q1 + q2; i++) {
        if (i - q1 >= 0) {
            dp[i] = min(dp[i - q1] + p1, dp[i]);
        }
        if (i - q2 >= 0) {
            dp[i] = min(dp[i - q2] + p2, dp[i]);
        }
    }
    int res = 10e7;
    for (int i = a; i <= a + q1 + q2; i++) {
        res = min(res, dp[i]);
    }
    cout << res;
    return 0;
}