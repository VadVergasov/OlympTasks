// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
// https://codeforces.com/contest/1328/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, res;
        cin >> n;
        vector<int> t(n);
        set<int> all;
        for (auto &i : t) {
            cin >> i;
        }
        vector<int> r(n, 0);
        for (int i = 0; i < n; i++) {
            int next = i + 1, prev = i - 1;
            if (prev == -1) {
                prev = n - 1;
            }
            if (next == n) {
                next = 0;
            }
            r[i] = 1;
            while ((r[i] == r[next] && t[i] != t[next]) ||
                   (r[i] == r[prev] && t[i] != t[prev])) {
                r[i]++;
            }
        }
        for (int i = 0; i < n; i++) {
            int next = i + 1, prev = i - 1;
            if (prev == -1) {
                prev = n - 1;
            }
            if (next == n) {
                next = 0;
            }
            r[i] = 1;
            while ((r[i] == r[next] && t[i] != t[next]) ||
                   (r[i] == r[prev] && t[i] != t[prev])) {
                r[i]++;
            }
        }
        for (auto i : r) {
            all.insert(i);
        }
        res = all.size();
        cout << res << "\n";
        for (auto i : r) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}