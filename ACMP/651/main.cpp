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
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, m, nok, f = 0, s = 0;
    in >> n >> m;
    nok = n / __gcd(n, m) * m;
    long long a = nok / n, b = nok / m;
    for (int i = 2; i <= sqrt(a); i++) {
        while (a % i == 0) {
            f++;
            a /= i;
        }
    }
    if (a > 1) {
        f++;
    }
    for (int i = 2; i <= sqrt(b); i++) {
        while (b % i == 0) {
            s++;
            b /= i;
        }
    }
    if (b > 1) {
        s++;
    }
    out << f + s;
    return 0;
}
