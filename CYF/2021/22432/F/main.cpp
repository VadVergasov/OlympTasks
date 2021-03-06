// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
