#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int m;
    cin >> m;
    vector<vector<int> > dp(m + 1, vector<int>(4, 0));
    dp[0][0] = 1;
    for (int k = 1; k < 4; k++) {
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < n; j++) {
                if (i - a[j] < 0) {
                    continue;
                }
                if (dp[i - a[j]][k - 1] == 0) {
                    continue;
                }
                dp[i][k] = dp[i - a[j]][k - 1];
            }
        }
    }
    for (int i = m; i >= 0; i--) {
        if (dp[i][3] == 1) {
            cout << i;
            return 0;
        }
    }
    return 0;
}