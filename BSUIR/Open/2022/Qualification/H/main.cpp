// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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

const long long mod = 1e9 + 7;

long long binpow(long long x, long long n) {
    long long res = 1;
    while (n) {
        if (n & 1) {
            res *= x;
            res %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return res;
}

long long calc(long long a) {
    return (long long)floor((sqrt(1 + 8 * a) - 1) / 2) % mod;
}

long long count(long long a) {
    return (1 + (a % mod - 1 - (calc(a) * (calc(a) - 1)) / 2) % mod *
                    binpow(2, calc(a))) %
           mod;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}
