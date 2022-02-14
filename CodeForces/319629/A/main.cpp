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

long long binpow(long long n, long long p) {
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
    int n;
    cin >> n;
    long long res = 0;
    for (int i = 1; i < 9 * n; i++) {
        long long a = 0, b = b = binpow(10, n - 1), sum = i, j = n - 1;
        while (sum) {
            a += min(9LL, sum) * binpow(10, j);
            j--;
            sum = max(0LL, sum - 9);
        }
        sum = i - 1;
        j = 0;
        while (sum) {
            b += min(9LL, sum) * binpow(10, j);
            j++;
            sum = max(0LL, sum - 9);
        }
        res = max(res, a - b);
    }
    cout << res;
    return 0;
}
