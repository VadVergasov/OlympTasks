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
    ifstream in("herding.in");
    ofstream out("herding.out");
    int a, b, c;
    in >> a >> b >> c;
    int mn, mx = max(abs(a - b) - 1, abs(b - c) - 1);
    if (min(abs(a - b) - 1, abs(b - c) - 1) == 1) {
        mn = 1;
    } else {
        mn = 2;
    }
    if (a + 1 == b && b + 1 == c) {
        out << "0\n0";
        return 0;
    }
    out << mn << "\n" << mx;
    return 0;
}