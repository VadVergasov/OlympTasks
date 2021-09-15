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
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)),
           b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)),
           c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    cout << "Edges: " << a << " " << b << " " << c << endl;
    double p = (a + b + c) / 2, S = sqrt(p * (p - a) * (p - b) * (p - c));
    double h1 = 2 * S / a, h2 = 2 * S / b, h3 = 2 * S / c;
    cout << "Heights: " << h1 << " " << h2 << " " << h3 << endl;
    double m1 = sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)) / 2,
           m2 = sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2)) / 2,
           m3 = sqrt(2 * pow(c, 2) + 2 * pow(b, 2) - pow(a, 2)) / 2;
    cout << "Medians: " << m1 << " " << m2 << " " << m3 << endl;
    double l1 = 2 * sqrt(a * c * p * (p - b)) / (a + c),
           l2 = 2 * sqrt(b * c * p * (p - a)) / (b + c),
           l3 = 2 * sqrt(b * a * p * (p - c)) / (b + a);
    cout << "Bisectors: " << l1 << " " << l2 << " " << l3 << endl;
    double r1 = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)),
           r2 = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)),
           r3 = acos((pow(b, 2) + pow(a, 2) - pow(c, 2)) / (2 * b * a));
    cout << "Rads: " << r1 << " " << r2 << " " << r3 << endl;
    double d1 = r1 * 180 / acos(-1), d2 = r2 * 180 / acos(-1),
           d3 = r3 * 180 / acos(-1);
    cout << "Degrees: " << d1 << " " << d2 << " " << d3 << endl;
    double r = S / p, R = (a * b * c) / (4 * S);
    cout << "Inscribed radius: " << r << " Described radius: " << R << endl;
    double inscribed_l = 2 * r * acos(-1), described_l = 2 * R * acos(-1),
           inscribed_s = pow(r, 2) * acos(-1),
           described_s = pow(R, 2) * acos(-1);
    cout << "Inscribed length: " << inscribed_l << " square: " << inscribed_s
         << endl;
    cout << "Described length: " << described_l << " square: " << described_s
         << endl;
    double S2 = a * h1 / 2, S3 = a * b * sin(r3) / 2;
    cout << "Perimeter: " << p * 2 << " Square 1: " << S << " 2: " << S2
         << " 3: " << S3;
    return 0;
}
