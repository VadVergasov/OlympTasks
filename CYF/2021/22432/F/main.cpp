#include <bits/stdc++.h>

using namespace std;

long long binpow(long long n, long long p, long long MOD) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n;
            res %= MOD;
        }
        n *= n;
        n %= MOD;
        p /= 2;
    }
    res %= MOD;
    return res;
}

int main() {
    const long long MOD = 1e9 + 7;
    long long x, k, d;
    cin >> x >> k >> d;
    if (x <= 0) {
        if (ceil((double)(abs(x)) / (double)d) > k) {
            cout << max(x + k * d, x * binpow(d, k, MOD));
            return 0;
        } else {
            k -= ceil((double)(abs(x)) / (double)d);
            x += d % MOD * (long long)ceil((double)(abs(x)) / (double)d) % MOD;
            x %= MOD;
        }
    }
    if (d == 1 || d == 0) {
        cout << (x + k * d) % MOD;
        return 0;
    }
    while (k > 0 && x + d >= x * d) {
        k--;
        x += d;
        x %= MOD;
    }
    cout << (x % MOD * binpow(d, k, MOD)) % MOD;
    return 0;
}
