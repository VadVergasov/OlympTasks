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
    int n, k;
    cin >> n >> k;
    vector<long long> p(n);
    vector<long long> sum(n);
    for (auto &i : p) {
        cin >> i;
    }
    sum.front() = p.front();
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + p[i];
    }
    long long mx = sum[k - 1];
    for (int i = k; i < n; i++) {
        mx = max(mx, sum[i] - sum[i - k]);
    }
    cout << fixed << setprecision(9) << (double)(mx + k) / 2.0;
    return 0;
}