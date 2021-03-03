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
// https://codeforces.com/contest/1385/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n * 2), res;
        for (auto &i : a) {
            cin >> i;
        }
        while (a.size() != 0) {
            int i = 1;
            while (a[0] != a[i]) {
                i++;
            }
            res.push_back(a[0]);
            a.erase(a.begin() + 0);
            a.erase(a.begin() + i - 1);
        }
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}