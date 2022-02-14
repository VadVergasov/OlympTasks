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
    int hh, mm;
    double h, d, c, m, res1;
    cin >> hh >> mm >> h >> d >> c >> m;
    if (hh < 20) {
        res1 = c * ceil(h / m);
    } else {
        res1 = 0.8 * c * ceil(h / m);
    }
    if (hh < 20) {
        h += (20 - hh) * d * 60;
        if (mm != 0) {
            h -= 60 * d;
        }
        h += abs((60 - mm) % 60 * d);
    }
    cout << fixed << setprecision(4) << min(0.8 * c * ceil(h / m), res1);
    return 0;
}