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

int m;

long long T(int n, int k) {
    if (k == n || k == 0) {
        return 1;
    } else if (n >= 2 && k > 0 && k < n) {
        if (k % 2 == 0 || (n - k) % 2 == 0) {
            return (T(n - 1, k - 1) + T(n - 2, k - 1) + T(n - 1, k)) % m;
        } else {
            return (T(n - 1, k - 1) + T(n - 1, k)) % m;
        }
    }
}

long long a(int n) {
    long long res = 0;
    for (int i = 0; i < n - 1; i++) {
        res += (T(n, i) * T(n, i + 2)) % m;
    }
    return res;
}

int main() {
    long long n;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    long long res = 0;
    do {
        for (int i = 0; i < n; i++) {
            int mn = 10e9, mx = 0;
            for (int j = i; j < n; j++) {
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
                if (mx - mn == j - i) {
                    res++;
                }
            }
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << res;
    return 0;
}