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
// https://codeforces.com/contest/1303/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    long double t;
    cin >> t;
    for (long double q = 0; q < t; q++) {
        long long n, b, g, good;
        cin >> n >> g >> b;
        good = ceil((double)n / 2.0);
        long long l = n, r = 1e18, res = 1e18;
        while (l <= r) {
            long long m = (l + r) / 2;
            long long tmp = g * (m / (b + g)) + min(g, m % (g + b));
            if (tmp >= good) {
                res = min(res, m);
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}