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
#include <bits/stdc++.h>

using namespace std;

int main() {
    long double a, b, c;
    cin >> a >> b >> c;
    if ((int)a + (int)b <= (int)c || (int)a + (int)c <= (int)b ||
        (int)b + (int)c <= (int)a) {
        cout << "Impossible\n";
        return 0;
    }
    pair<long double, long double> f = {0, 0}, s = {0, a}, t;
    long double cos = (a * a + b * b - c * c) / (2 * a * b);
    t.first = b * sqrt(1 - cos * cos);
    t.second = b * cos;
    cout << fixed << setprecision(6) << s.first << " " << s.second << "\n"
         << f.first << " " << f.second << "\n"
         << t.first << " " << t.second << "\n";
    return 0;
}
