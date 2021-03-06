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
// https://codeforces.com/contest/1343/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        long long sum = 0;
        bool f = true;
        if (a[0] < 0) {
            f = false;
        }
        for (int i = 0; i < n; i++) {
            if (!f) {
                int mn = -1e9;
                while (a[i] < 0 && i < a.size()) {
                    mn = max(mn, a[i]);
                    i++;
                }
                i--;
                sum += mn;
                f = true;
            } else {
                int mx = 0;
                while (a[i] > 0 && i < a.size()) {
                    mx = max(mx, a[i]);
                    i++;
                }
                i--;
                sum += mx;
                f = false;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}