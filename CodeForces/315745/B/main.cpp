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

#pragma GCC optimize("Ofast,unroll-loops")

using namespace std;

long long get_sum(long long a, long long b) {
    return abs(a * (a + 1) / 2 - max(0LL, b * (b + 1)));
}

long long get_sum_v(long long a, long long b, long long c) {
    long long res = (a * c) * (a * c + 1) / 2;
    if (b == 0) {
        return res;
    }
    res -= 2 * (c * (b * (b + 1) / 2) + c * (c - 1) / 2 * a * b);
    res = abs(res);
    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        long long mn = 1e18;
        long long l = 0, r = n;
        while (r - l > 10) {
            long long m1 = l + (r - l) / 3, m2 = r - (r - l) / 3;
            if (get_sum(n * m, m * (m1 - 1)) < get_sum(n * m, m * (m2 - 1))) {
                r = m2;
            } else {
                l = m1;
            }
        }
        for (int i = l; i <= r; i++) {
            mn = min(mn, get_sum(n * m, m * (i - 1)));
        }
        long long l1 = 0, r1 = m;
        while (r1 - l1 > 10) {
            long long m1 = l1 + (r1 - l1) / 3, m2 = r1 - (r1 - l1) / 3;
            if (get_sum_v(m, m1 - 1, n) < get_sum_v(m, m2 - 1, n)) {
                r1 = m2;
            } else {
                l1 = m1;
            }
        }
        for (int i = l1; i <= r1; i++) {
            mn = min(mn, get_sum_v(m, i - 1, n));
        }
        bool res = false;
        for (int i = l1; i <= r1; i++) {
            if (mn == get_sum_v(m, i - 1, n)) {
                cout << "V " << i << "\n";
                res = true;
                break;
            }
        }
        if (!res) {
            for (int i = l; i <= r; i++) {
                if (mn == get_sum(n * m, m * (i - 1))) {
                    cout << "H " << i << "\n";
                    res = true;
                    break;
                }
            }
        }
    }
    return 0;
}
