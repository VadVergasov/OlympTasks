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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, x, y, x0, y0, res = 0;
    bool f = false;
    in >> n >> m >> k >> x >> y;
    for (int i = 0; i < k; i++) {
        in >> x0 >> y0;
        if ((x0 % 2) == (x % 2) && (y0 % 2) == (y % 2) ||
            (x0 % 2) != (x % 2) && (y0 % 2) != (y % 2)) {
            res++;
        }
        if (x0 == x && y0 == y) {
            f = true;
        }
    }
    if (n == 1 && m != 1 && !f || n != 1 && m == 1 && !f) {
        out << 0;
        return 0;
    } else if (f && n == 1 && m != 1 || n != 1 && m == 1) {
        out << 1;
        return 0;
    }
    out << res;
    return 0;
}