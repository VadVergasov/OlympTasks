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
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int W, H, x1, y1, x2, y2, w1, h1, w2, h2;
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w2 >> h2;
    w1 = x2 - x1;
    h1 = y2 - y1;
    double res = 2000;
    if (w1 + w2 <= W || h1 + h2 <= H) {
        int a = 2000, b = 2000, c = 2000, d = 2000;
        if (((w2 - x1 > h2 - y1) || w1 + w2 > W) && h1 + h2 <= H) {
            a = h2 - y1;
        } else if (w1 + w2 <= W) {
            a = w2 - x1;
        }
        if (((w2 - x1 > y2 - (H - h2)) || w1 + w2 > W) && h1 + h2 <= H) {
            b = y2 - (H - h2);
        } else if (w1 + w2 <= W) {
            b = w2 - x1;
        }
        if (((x2 - (W - w2) > h2 - y1) || w1 + w2 > W) && h1 + h2 <= H) {
            c = h2 - y1;
        } else if (w1 + w2 <= W) {
            c = x2 - (W - w2);
        }
        if (((x2 - (W - w2) > y2 - (H - h2)) || w1 + w2 > W) && h1 + h2 <= H) {
            d = y2 - (H - h2);
        } else if (w1 + w2 <= W) {
            d = x2 - (W - w2);
        }
        if (res > a) {
            res = a;
        }
        if (res > b) {
            res = b;
        }
        if (res > c) {
            res = c;
        }
        if (res > d) {
            res = d;
        }
    } else {
        res = -1;
    }
    cout << fixed << setprecision(6) << res;
    return 0;
}
