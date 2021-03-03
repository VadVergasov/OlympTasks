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
// https://codeforces.com/contest/1307/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        int res = a.front();
        for (int i = 1; i < n && d > 0; i++) {
            if (a[i] == 0) {
                continue;
            }
            res += min(a[i], d / i);
            d -= i * min(a[i], d / i);
        }
        cout << res << "\n";
    }
    return 0;
}