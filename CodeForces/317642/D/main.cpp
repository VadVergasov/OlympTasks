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

using namespace std;

void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

__int128 num(string s) {
    __int128 res = 0, p = 1;
    while (!s.empty()) {
        res += (s.back() - '0') * p;
        p *= 10;
        s.pop_back();
    }
    return res;
}

__int128 mult(__int128 a, __int128 b, __int128 m) {
    if (b <= 1) {
        return a * b;
    }
    __int128 res = (2 * mult(a, b / (__int128)2, m)) % m;
    if (b % 2 == 1) {
        res += a;
        res %= m;
    }
    return res;
}

__int128 binpow(__int128 n, __int128 p, __int128 m) {
    __int128 res = 1;
    while (p) {
        if (p & 1) {
            res = mult(n, res, m);
            res %= m;
        }
        n = mult(n, n, m);
        p >>= 1;
        n %= m;
    }
    return res;
}

int main() {
    string x, y, z;
    cin >> x >> y >> z;
    __int128 a = num(x), b = num(z), res = 1;
    for (int i = (int)y.size() - 1; i >= 0; i--) {
        int cur = y[i] - '0';
        res = mult(binpow(a, cur, b), res, b);
        res %= b;
        a = binpow(a, 10, b);
    }
    print(res);
    return 0;
}
