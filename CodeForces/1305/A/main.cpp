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
// https://codeforces.com/contest/1305/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i : a) {
            cin >> i;
        }
        for (auto &i : b) {
            cin >> i;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        map<int, int> all;
        for (int i = 0; i < n; i++) {
            if (all[a[i] + b[i]] != 0) {
                int pos = all[a[i] + b[i]];
                swap(b[i], b[pos]);
                all[pos] = 0;
                all[a[pos] + b[pos]] = pos;
            }
            all[a[i] + b[i]]++;
        }
        for (auto i : a) {
            cout << i << " ";
        }
        cout << "\n";
        for (auto i : b) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}