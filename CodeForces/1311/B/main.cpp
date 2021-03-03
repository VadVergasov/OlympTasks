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
// https://codeforces.com/contest/1311/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n, m;
        cin >> n >> m;
        vector<int> a(n), p(m), sorted;
        for (auto &i : a) {
            cin >> i;
        }
        sorted = a;
        sort(sorted.begin(), sorted.end());
        for (auto &i : p) {
            cin >> i;
        }
        bool res = true;
        while (a != sorted) {
            bool was = false;
            for (int i = 0; i < m; i++) {
                if (a[p[i] - 1] > a[p[i]]) {
                    was = true;
                    swap(a[p[i] - 1], a[p[i]]);
                }
            }
            if (!was) {
                cout << "NO\n";
                res = false;
                break;
            }
        }
        if (res) {
            cout << "YES\n";
        }
    }
    return 0;
}