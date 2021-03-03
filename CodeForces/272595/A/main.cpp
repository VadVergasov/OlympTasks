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
    vector<int> x(n);
    for (auto &i : x) {
        cin >> i;
    }
    sort(x.begin(), x.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int l = lower_bound(begin(x), end(x), 2 * x[j] - x[i]) - begin(x),
                r = lower_bound(begin(x), end(x), 2 * (x[j] - x[i]) + x[j]) -
                    begin(x);
            if (x[j] - x[i] > x[l] - x[j]) {
                l++;
            }
            if (2 * (x[j] - x[i]) < x[r] - x[j] || r == n) {
                r--;
            }
            if (l == n || l > r) {
                continue;
            }
            // cout << x[i] << " " << x[j] << " " << l << " " << r << "\n";
            res += r - l + 1;
        }
    }
    cout << res;
    return 0;
}