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