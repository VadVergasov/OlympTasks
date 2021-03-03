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
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, m, mx = 0;
        long long res = 0;
        cin >> n >> m;
        map<int, int> d;
        vector<int> a(n), b(m);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            d[a[j]] = j + 1;
        }
        for (auto &j : b) {
            cin >> j;
        }
        for (int j = 0; j < m; j++) {
            if (d[b[j]] < mx || d[b[j]] == j + 1) {
                res++;
            } else {
                res += (d[b[j]] - j - 1) * 2 + 1;
            }
            mx = max(mx, d[b[j]]);
        }
        cout << res << "\n";
    }
    return 0;
}