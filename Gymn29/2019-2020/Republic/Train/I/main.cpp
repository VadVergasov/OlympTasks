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

#pragma GCC optimize("O2,no-stack-protector,unroll-loops")

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long l, r;
    in >> l >> r;
    for (long long i = 1; i <= 1e6; i++) {
        long long cur = i * i * i;
        long long l1 = 0, r1 = 1e9;
        while (l1 < r1) {
            long long m = (l1 + r1) / 2;
            if (cur + m * m > r) {
                r1 = m;
            } else if (cur + m * m < l) {
                l1 = m + 1;
            } else if (cur + m * m >= l && cur + m * m <= r) {
                out << m << " " << i;
                return 0;
            }
        }
    }
    out << "0 0";
    return 0;
}