"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>
#define int long long

using namespace std;

const int mod = 998244353;

int add(int a, int b) { return (a + b + 5 * mod) % mod; }

struct bit {
    vector<int> f;
    bit(int n) { f.resize(n + 6); }

    void upd(int i, int x) {
        for (; i < f.size(); i += i & -i) f[i] = add(f[i], x);
    }

    int get(int i) {
        int ans = 0;
        for (; i > 0; i -= i & -i) ans = add(ans, f[i]);
        return ans;
    }
};

int mul(int a, int b) {
    while (a < 0) a += mod;
    while (b < 0) b += mod;
    a %= mod, b %= mod;
    return (a * b) % mod;
}

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) cin >> i;

    bit f(n + 5), f1(n + 5);
    reverse(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += mul(n - i + 1, f.get(v[i] - 1));
        ans %= mod;

        f.upd(v[i], i);
        f1.upd(v[i], 1);
    }
    cout << ans;
}