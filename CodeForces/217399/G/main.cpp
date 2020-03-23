#include <bits/stdc++.h>

using namespace std;

long long binpow(long long n, long long p, long long m) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n % m;
            res %= m;
        }
        n = (n % m) * (n % m);
        n %= m;
        p >>= 1;
    }
    return res;
}

int main() {
    long long n, sum = 0, mod = 1e9 + 7;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
        sum += i;
    }
    long long res = 0;
    for (long long i = 0; i < n; i++) {
        res += (((a[i] % mod) * ((sum - a[i]) % mod)) % mod *
                binpow(2, n - 2, mod)) %
               mod;
        res %= mod;
    }
    cout << res;
    return 0;
}