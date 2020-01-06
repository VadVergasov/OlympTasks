#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, odd = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        if (n % 2 == 1) {
            odd++;
        }
        cin >> i;
    }
    vector<vector<vector<vector<int> > > > dp(
        n, vector<vector<vector<int> > >(
               n, vector<vector<int> >(n, vector<int>(2, 10e8))));
    dp[0][n - odd][odd][0] = 0;
    dp[0][n - odd][odd][1] = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == 0) {
            dp[i][0] = min(dp[i][0], min(dp[i - 1][0], dp[i - 1][1] + 1));
            dp[i][1] = min(dp[i][0], min(dp[i - 1][0] + 1, dp[i - 1][1]));
        } else {
            if (a[i - 1] % 2 != a[i - 2] % 2 && a[i - 1] != 0) {
                dp[i][n - (odd - a[i] % 2)][odd - a[i] % 2][a[i] % 2] =
                    min(dp[i][a[i] % 2], dp[i - 1][a[i - 1] % 2] + 1);
            } else if (a[i - 1] % 2 == a[i - 2] % 2 && a[i - 1] != 0) {
                dp[i][a[i] % 2] = min(dp[i][a[i] % 2], dp[i - 1][a[i - 1] % 2]);
            } else {
                dp[i][a[i] % 2] =
                    min(dp[i][a[i] % 2], min(dp[i - 1][abs(0 - a[i] % 2)],
                                             dp[i - 1][1 - a[i] % 2] + 1));
            }
        }
    }
    if (a.back() == 0) {
        cout << min(dp.back()[0], dp.back()[1]);
    } else {
        cout << dp.back()[a.back() % 2];
    }
    return 0;
}