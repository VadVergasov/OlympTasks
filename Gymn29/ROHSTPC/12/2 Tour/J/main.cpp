// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
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