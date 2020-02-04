#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define inf 1e18

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    ll ans = 0;
    vector<ll> dp(n + 1, inf);
    dp[0] = -inf;
    for (int i = 1; i <= n; ++i) {
        int pos = upper_bound(dp.begin(), dp.end(), v[i - 1]) - dp.begin();
        if (dp[pos - 1] < v[i - 1] && dp[pos] > v[i - 1]) {
            dp[pos] = v[i - 1];
            ans = max(ans, 1LL * pos);
        }
    }
    cout << ans;
    return 0;
}