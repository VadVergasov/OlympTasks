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
// https://codeforces.com/contest/1315/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (auto &i : b) {
            cin >> i;
        }
        vector<int> a(2 * n, -1);
        set<int> was;
        for (int i = 0; i < n; i++) {
            a[2 * i] = b[i];
            was.insert(b[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = a[2 * i] + 1; j <= 2 * n; j++) {
                if (was.find(j) == was.end()) {
                    a[2 * i + 1] = j;
                    was.insert(j);
                    break;
                }
            }
        }
        bool res = true;
        for (int i = 0; i < n; i++) {
            if (a[2 * i] > a[2 * i + 1]) {
                swap(a[2 * i], a[2 * i + 1]);
            }
            if (min(a[2 * i], a[2 * i + 1]) != b[i]) {
                cout << "-1\n";
                res = false;
                break;
            }
        }
        if (res) {
            for (auto i : a) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}