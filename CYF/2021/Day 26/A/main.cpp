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

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("tune=native")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    cin.tie(0);
    cout.tie(0);
    long long l, r;
    cin >> l >> r;
    long long res = r - l + 1;
    vector<bool> prime(1e7 + 1, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 4; i <= 1e7; i += 2) {
        prime[i] = false;
    }
    long long cur = 4;
    while (cur <= r) {
        if (cur >= l && cur <= r) {
            res--;
        }
        cur <<= 1;
    }
    for (long long i = 3; i <= 1e6; i++) {
        if (prime[i]) {
            long long cur = i * i;
            while (cur <= r) {
                if (cur >= l && cur <= r) {
                    res--;
                }
                cur *= i;
            }
            for (long long j = i * i; j <= 1e7; j += i) {
                prime[j] = false;
            }
        }
    }
    cout << res;
    return 0;
}
