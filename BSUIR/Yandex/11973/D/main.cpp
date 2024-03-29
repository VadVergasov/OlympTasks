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

int main() {
    long long n;
    cin >> n;
    vector<bool> a(n, true);
    for (long long i = 4; i <= n; i += 2) {
        a[i] = false;
    }
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (a[i]) {
            for (long long j = i * i; j <= n; j += i) {
                a[j] = false;
            }
        }
    }
    long long res1 = 0, res2 = 0;
    for (long long i = 3; i <= n; i += 2) {
        if (a[i]) {
            if (i % 4 == 3) {
                res2++;
            }
            if (i % 4 == 1) {
                res1++;
            }
        }
    }
    cout << res1 << " " << res2;
    return 0;
}