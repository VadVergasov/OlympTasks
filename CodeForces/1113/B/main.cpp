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

int main() {
    int n, sum = 0, mn = 100;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mn = min(mn, a[i]);
    }
    int tmp = sum;
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) {
            continue;
        }
        for (int j = 2; j <= sqrt(a[i]); j++) {
            if (a[i] % j == 0) {
                tmp = min(tmp, sum - (a[i] - a[i] / j) + (mn * j - mn));
            }
        }
    }
    sum = min(sum, tmp);
    cout << sum;
    return 0;
}