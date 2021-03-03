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

const long long MOD = 1e9 + 7;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    long long right = 0, not_right = 0, right_plus = 0, not_right_plus = 0,
              zeros = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        int f = a[i] - '0', s = b[i] - '0', t = c[i] - '0';
        if (f == 0 || s == 0 || t == 0) {
            zeros++;
        }
        if (f + s == t) {
            right++;
        } else if (f + s - 10 == t) {
            right_plus++;
        } else if (f + s > 9) {
            not_right_plus++;
        } else {
            not_right++;
        }
    }
    if (right == 0 && right_plus == 0) {
        cout << 0;
        return 0;
    }
    cout << (1LL << right) << " " << right_plus * not_right << " "
         << not_right_plus;
    return 0;
}
