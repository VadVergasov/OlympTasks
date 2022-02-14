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
    ifstream in("stair.in");
    ofstream out("stair.out");
    double x1, x2, y1, y2, a, b, xd, yd;
    in >> x1 >> y1 >> x2 >> y2 >> a >> b;
    if (abs(x1 - x2) / a < 1.0 || abs(x1 - x2) / a - abs(y1 - y2) / b < 0) {
        out << -1;
        return 0;
    }
    xd = abs(x1 - x2);
    yd = abs(y1 - y2);
    int xr1, xr2;
    if (abs(xd / a - (int)(xd) / (int)(a)) < DBL_EPSILON) {
        xr1 = a;
        xr2 = 1;
    } else {
        xr1 = xd;
        xr2 = floor(xd / a);
    }
    if (yd > b * floor(xd / a)) {
        out << -1;
        return 0;
    }
    out << (int)xr1 << " " << (int)xr2 << "\n"
        << (int)yd << " " << (int)floor(xd / a) << "\n";
    return 0;
}