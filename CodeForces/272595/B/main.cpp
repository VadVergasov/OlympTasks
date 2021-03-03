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
    int n;
    cin >> n;
    vector<long long> a(n), pref(n);
    for (auto &i : a) {
        cin >> i;
    }
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }
    double res = (double)(a.front() + a.back()) / 2.0;
    for (int i = 1; i < n - 2; i++) {
        for (int j = i; j < n - 1; j++) {
            res = min(res, (double)(pref.back() - pref[j] + pref[i - 1]) /
                               (double)(n - (j - i + 1)));
        }
    }
    cout << fixed << setprecision(6) << res;
    return 0;
}