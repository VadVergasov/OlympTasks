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

int main() {
    long long n, k, m;
    cin >> n >> k >> m;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    sort(begin(a), end(a));
    map<int, long long> a1, a2;
    for (int i = 0; i < 1 << (n / 2); i++) {
        if (__builtin_popcount(i) <= k) {
            long long sum = 0, num = i, j = 0;
            while (num) {
                if (num % 2 == 1) {
                    sum += a[j];
                }
                num >>= 1;
                j++;
            }
            a1[i] = sum;
        }
    }
    for (int i = 1 << (n / 2); i < 1 << n; i++) {
        if (__builtin_popcount(i) <= k) {
            long long sum = 0, num = i, j = 0;
            while (num) {
                if (num % 2 == 1) {
                    sum += a[j];
                }
                num >>= 1;
                j++;
            }
            a2[i] = sum;
        }
    }
    for (auto [i, j] : a1) {
        cout << i << " " << j << "\n";
    }
    for (auto [i, j] : a2) {
        cout << i << " " << j << "\n";
    }
    return 0;
}
