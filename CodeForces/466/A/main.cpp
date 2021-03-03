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
    int num, res = 0;
    bool ab = false;
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if ((double)(b) / (double)(m) < a) {
        ab = true;
    }
    if (ab) {
        num = floor((double)(n) / (double)(m));
        res += num * b;
        if ((n - num * m) * a > b) {
            res += b;
        } else {
            res += (n - num * m) * a;
        }
    } else {
        res += n * a;
    }
    cout << res;
    return 0;
}
