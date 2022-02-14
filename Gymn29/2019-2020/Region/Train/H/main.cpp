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
    ifstream in("input.txt");
    ofstream out("output.txt");
    double x;
    in >> x;
    long long n;
    in >> n;
    long long a = atoi(to_string(x).substr(2, to_string(x).size()).c_str()),
              b = pow(10, to_string(x).size() - 2);
    long long g = __gcd(a, b);
    a /= g;
    b /= g;
    long long res = 0;
    for (long long i = 1; i <= n; i++) {
        long long gcd = __gcd(i, b);
        long long to = i * b / gcd;
        long long cur = 1;
        while (cur * (to / i) <= a * (to / b)) {
            if (__gcd(cur, i) == 1) {
                res++;
            }
            cur++;
        }
    }
    out << res;
    return 0;
}