// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long double t, s0, s1, s2, v1, v2;
    cin >> t >> s0 >> s1 >> s2 >> v1 >> v2;
    long double a = -(t * v2 + s0 - t * v1 + s1 + s2) / t,
                b = -(t * v1 * v2 + s0 * v1 - s0 * v2 - s1 * v2 + s2 * v1) / t,
                c = s0 * v1 * v2 / t;
    long double Q = (a * a - 3 * b) / 9;
    long double R = (2 * a * a * a - 9 * a * b + 27 * c) / 54;
    long double fi = acos(R / sqrt(Q * Q * Q)) / 3, q = -2 * sqrt(Q);
    long double x1 = q * cos(fi) - a / 3;
    long double x2 = q * cos(fi + (2 * acos(-1) / 3)) - a / 3;
    long double x3 = q * cos(fi - (2 * acos(-1) / 3)) - a / 3;
    cout << fixed << setprecision(9) << max({x1, x2, x3}) << endl;
    return 0;
}
