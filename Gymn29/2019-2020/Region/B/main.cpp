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
    int a, b;
    cin >> a >> b;
    if (a > b * 9) {
        cout << -1;
        return 0;
    }
    string mx = "", mn;
    while (b) {
        if (a < 9) {
            mx += to_string(a);
            a = 0;
        } else {
            mx += "9";
            a -= 9;
        }
        b--;
    }
    mn = mx;
    reverse(mn.begin(), mn.end());
    for (int i = mn.size() - 1; i >= 0; i--) {
        if (mx[i] < mn[i]) {
            mx[i] += 10;
            mx[i] -= mn[i] - '0';
            int j = i - 1;
            mx[j]--;
            while (mx[j] < '0') {
                mx[j] += 10;
                j--;
                mx[j]--;
            }
        } else {
            mx[i] -= mn[i] - '0';
        }
    }
    while (mx[0] == '0') {
        mx.erase(0, 1);
    }
    if (mx == "") {
        cout << 0;
        return 0;
    }
    cout << mx;
    return 0;
}