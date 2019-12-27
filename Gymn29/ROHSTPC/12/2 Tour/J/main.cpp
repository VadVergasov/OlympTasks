#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n), sum(n);
    for (auto &i : v) cin >> i, i %= m;
    sum[0] = v[0];
    for (int i = 1; i < n; ++i) {
        sum[i] = sum[i - 1] + v[i];
        sum[i] %= m;
    }
    ll ans = 0;
    set<ll> st;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            ans = v[i];
            st.insert(v[i]);
        } else {
            ll mn = *st.begin(), mx = 0;
            if (st.upper_bound(sum[i]) != st.end()) {
                mx = *st.upper_bound(sum[i]);
            }
            ans = max(ans, sum[i]);
            ans = max({ans, (sum[i] - mn) % m, (sum[i] - mx + 3 * m) % m});
            st.insert(sum[i]);
        }
    }
    cout << ans;
    return 0;
}