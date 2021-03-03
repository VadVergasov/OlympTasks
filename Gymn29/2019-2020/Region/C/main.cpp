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

using namespace std;

long long binpow(long long n, int p) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n;
        }
        n *= n;
        p >>= 1;
    }
    return res;
}

int main() {
    string a;
    char b;
    cin >> a >> b;
    long long n;
    cin >> n;
    if (n <= a.size()) {
        cout << a[n - 1];
        return 0;
    }
    long long l = 1, r = ceil(log2(1000000000000000000 / a.size())) + 1, m;
    m = (l + r) >> 1;
    while (l <= r) {
        if (binpow(2, m) * a.size() + binpow(2, m) - 1 >= n) {
            r = m - 1;
        } else {
            l = m + 1;
        }
        m = (l + r) >> 1;
    }
    m++;
    l = 0, r = binpow(2, m) * a.size() + binpow(2, m) - 1;
    long long mid;
    while (r != n && (r - l) != a.size() && r != l) {
        r--;
        mid = (l + r) >> 1;
        if (mid < n) {
            l = 0;
            r -= mid;
            n -= mid;
        } else {
            r = mid;
        }
    }
    if (r == n && n != 1) {
        cout << b;
        return 0;
    }
    cout << a[n - 1];
    return 0;
}