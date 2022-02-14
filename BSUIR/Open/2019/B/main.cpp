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
    int an = 0, x, y, ax, ay, ans = 1e9;
    for (int i = 0; i <= n; ++i) {
        int x = i, y = n;
        bool f = 0;
        int cnt = 10;
        while (y - x >= 0) {
            if (x == 0 || y == 0) {
                break;
            }
            an = y;
            y = x;
            x = an - x;
        }
        if (y + x < ans || (y + x == ans && x < ax)) {
            ans = y + x;
            ax = x, ay = y;
        }
    }
    cout << ax << " " << ay << '\n';
}