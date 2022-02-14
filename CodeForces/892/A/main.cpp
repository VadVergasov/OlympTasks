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
    long long n, need, sum = 0, mx1 = 0, mx2 = 0;
    cin >> n;
    vector<long long> mx, now;
    mx.resize(n);
    now.resize(n);
    for (long long i = 0; i < n; i++) {
        cin >> now[i];
    }
    for (long long i = 0; i < n; i++) {
        cin >> mx[i];
        mx1 = max(mx1, mx[i]);
    }
    for (long long i = 0; i < n; i++) {
        if (mx[i] != mx1) {
            mx2 = max(mx2, mx[i]);
        }
    }
    if (mx2 == 0) {
        mx2 = mx[0];
    }
    need = mx1 + mx2;
    for (long long i = 0; i < n; i++) {
        sum += now[i];
    }
    if (sum <= need) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
