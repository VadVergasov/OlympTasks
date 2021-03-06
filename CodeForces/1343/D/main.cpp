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
// https://codeforces.com/contest/1343/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> mp;
        for (auto &i : a) {
            cin >> i;
        }
        for (int i = 0; i < n / 2; i++) {
            mp[a[i] + a[n - i - 1]]++;
        }
        int res = n / 2;
        for (auto [f, s] : mp) {
            if (f <= k + 1) {
                res = min(res, n / 2 - s);
            }
        }
        cout << res << "\n";
    }
    return 0;
}