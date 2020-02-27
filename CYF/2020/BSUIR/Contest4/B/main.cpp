#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] % a[j] == 0 || a[j] % a[i] == 0) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int mx = 0;
    for (auto i : dp) {
        mx = max(mx, i);
    }
    cout << mx;
    return 0;
}