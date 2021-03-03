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
    while (t--) {
        long long n, m, res = 1e18, sum1 = 0, sum2 = 0;
        cin >> n >> m;
        vector<long long> a(n), b(n);
        for (auto &i : a) {
            cin >> i;
        }
        for (auto &i : b) {
            cin >> i;
        }
        vector<long long> c, d;
        for (int i = 0; i < n; i++) {
            if (b[i] == 1) {
                c.push_back(a[i]);
            } else {
                d.push_back(a[i]);
                sum2 += a[i];
            }
        }
        sort(c.rbegin(), c.rend());
        sort(d.rbegin(), d.rend());
        int j = d.size();
        for (int i = 0; i <= (int)c.size(); i++) {
            while (j > 0 && sum1 + sum2 - d[j - 1] >= m) {
                sum2 -= d[j - 1];
                j--;
            }
            if (sum1 + sum2 >= m) {
                res = min(res, (long long)2 * j + i);
            }
            if (i < (int)c.size()) {
                sum1 += c[i];
            }
        }
        cout << ((res == 1e18) ? -1 : res) << "\n";
    }
    return 0;
}
