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
    bool b = false;
    int n, d, tmp, res = 0, cur = 0, pre;
    cin >> n >> d;
    string a;
    cin >> a;
    while (true) {
        pre = cur;
        for (int i = cur + d; i >= cur; i--) {
            if (a[i] == '1') {
                cur = i;
                res++;
                break;
            }
        }
        if (cur + 1 == n) {
            b = true;
            break;
        }
        if (pre == cur) {
            break;
        }
    }
    if (b) {
        cout << res;
    } else {
        cout << -1;
    }
    return 0;
}
