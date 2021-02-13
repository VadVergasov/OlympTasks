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