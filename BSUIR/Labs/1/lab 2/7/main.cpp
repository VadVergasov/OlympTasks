// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double D = pow(b, 2) - 4 * a * c;
    if (D < 0) {
        cout << "No roots" << endl;
    } else {
        double x1 = sqrt((-b + sqrt(D)) / (2.0 * a)),
               x2 = sqrt((-b - sqrt(D)) / (2.0 * a));
        cout << x1 << " " << -x1 << " " << x2 << " " << -x2 << endl;
    }

    D = pow(b, 2) - 4 * a * (c - 2 * a);
    if (D < 0) {
        cout << "No roots" << endl;
    } else {
        double y1 = (-b + sqrt(D)) / (2.0 * a), y2 = (-b + sqrt(D)) / (2.0 * a);
        D = pow(y1, 2) - 4;
        double x1 = (y1 + sqrt(D)) / (2.0 * a), x2 = (y1 - sqrt(D)) / (2.0 * a);
        D = pow(y2, 2) - 4;
        double x3 = (y2 + sqrt(D)) / (2.0 * a), x4 = (y2 - sqrt(D)) / (2.0 * a);
        cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
    }

    int p, q;
    cin >> p >> q;
    if (p > 0) {
        cout << "No roots" << endl;
    } else {
        double phi = acos((-q / 2.0) * sqrt(pow((3.0 / (-p)), 3))),
               y1 = 2 * sqrt(-p / 3.0) * cos(phi / 3.0),
               y2 = 2 * sqrt(-p / 3.0) * cos(phi / 3.0 + 2.0 * acos(-1) / 3.0),
               y3 = 2 * sqrt(-p / 3.0) * cos(phi / 3.0 - 2.0 * acos(-1) / 3.0);
        cout << y1 << " " << y2 << " " << y3 << endl;
    }
    return 0;
}
