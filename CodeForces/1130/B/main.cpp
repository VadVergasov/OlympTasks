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
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> a, b;
    for (int i = 0; i < 2 * n; i++) {
        int t;
        cin >> t;
        if (a[t] != 0) {
            b[t] += i + 1;
        } else {
            a[t] += i + 1;
        }
    }
    long long res1 = 0, res2 = 0, pre1 = 0, pre2 = 0;
    for (auto i : a) {
        res1 += abs((i.second - 1) - pre1);
        pre1 = i.second - 1;
    }
    for (auto i : b) {
        res2 += abs((i.second - 1) - pre2);
        pre2 = i.second - 1;
    }
    cout << res1 + res2;
    return 0;
}