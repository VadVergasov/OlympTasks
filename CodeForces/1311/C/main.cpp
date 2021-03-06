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
// https://codeforces.com/problemset/problem/1311/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> p(m);
        multiset<int> all;
        for (auto &i : p) {
            cin >> i;
            all.insert(i);
        }
        sort(p.begin(), p.end());
        int num = m + 1;
        vector<int> res(26);
        for (int i = 0; i < n; i++) {
            res[s[i] - 'a'] += num;
            if (p[m - num + 1] == i + 1) {
                num -= all.count(i + 1);
            }
        }
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}