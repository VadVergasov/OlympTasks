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
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    long long cur = 1;
    for (auto &i : a) {
        for (auto &j : i) {
            j = cur;
            cur += 2;
        }
    }
    if ((n * m) % 2 == 0) {
        a[n - 1][m - 1] = 2;
    }
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}