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
// https://codeforces.com/contest/1323/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<int> a(n);
        int res = 0;
        vector<int> r;
        int last = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0 && res == 0) {
                res = 1;
                r.push_back(i + 1);
            }
            if (res == 0 && last == -1 && a[i] % 2 == 1) {
                last = i + 1;
            } else if (res == 0 && last != -1 && a[i] % 2 == 1) {
                res = 2;
                r.push_back(last);
                r.push_back(i + 1);
            }
        }
        if (res == 0) {
            cout << "-1\n";
            continue;
        }
        cout << res << "\n";
        for (auto i : r) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}