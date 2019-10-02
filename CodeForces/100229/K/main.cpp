#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("ladder.in");
    ofstream out("ladder.out");
    int n;
    in >> n;
    vector<long long> a(n + 2, 0), dp(n + 2, INT_MIN);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        in >> a[i + 1];
    }
    int k;
    in >> k;
    for (int i = 0; i < n + 2; i++) {
        for (int j = 1; j <= min(k, n - i + 1); j++) {
            dp[i + j] = max(dp[i + j], dp[i] + a[i + j]);
        }
    }
    out << dp[n + 1];
    return 0;
}