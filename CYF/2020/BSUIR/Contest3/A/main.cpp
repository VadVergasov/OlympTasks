#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> a(n);
    long long i = 0;
    for (auto& [f, s] : a) {
        cin >> f;
        s = i;
        i++;
    }
    sort(a.begin(), a.end());
    vector<long long> b(n);
    long long g = 1;
    for (long long i = 0; i < n; i++) {
        b[a[i].second] = g;
        if ((i + 1) % k == 0) {
            g++;
        }
    }
    vector<long long> dp(n + 1, 1e18);
    dp[0] = -1e18;
    for (long long i = 0; i < n; i++) {
        long long j =
            (long long)(upper_bound(dp.begin(), dp.end(), b[i]) - dp.begin());
        if (dp[j - 1] <= b[i] && b[i] <= dp[j]) {
            dp[j] = b[i];
        }
    }
    long long mx = 0;
    for (long long i = dp.size() - 1; i >= 0; i--) {
        if (dp[i] != 1e18) {
            mx = i;
            break;
        }
    }
    cout << n - mx;
    return 0;
}