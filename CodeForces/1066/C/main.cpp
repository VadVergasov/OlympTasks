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

int a[200000];

int main() {
    ios_base::sync_with_stdio(false);
    int q, cl = 0, cr = 0;
    cin >> q;
    int l = 199999, r = 0;
    for (int i = 0; i < q; i++) {
        char tmp;
        cin >> tmp;
        if (i == 0) {
            int num;
            cin >> num;
            a[num] = cl;
            cl--;
            cr++;
        } else if (tmp == 'L') {
            int num;
            cin >> num;
            a[num] = cl;
            cl--;
        } else if (tmp == 'R') {
            int num;
            cin >> num;
            a[num] = cr;
            cr++;
        } else {
            int num;
            cin >> num;
            cout << min(abs(a[num] - cl), abs(a[num] - cr)) - 1 << "\n";
        }
    }
    return 0;
}
