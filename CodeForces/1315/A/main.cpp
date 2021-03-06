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
// https://codeforces.com/contest/1315/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int res = 0;
        res = max({(y - 1) * x, (x - 1) * y, (a - x - 1) * (b - y),
                   (a - x) * (b - y - 1), x * (b - y - 1), (x - 1) * (b - y),
                   y * (a - x - 1), (y - 1) * (a - x), a * (b - y - 1),
                   b * (a - x - 1), a * y, b * x});
        cout << res << "\n";
    }
    return 0;
}