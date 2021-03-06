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
    ifstream in("forest.in");
    ofstream out("forest.out");
    long long a, b, k, m, x;
    in >> a >> k >> b >> m >> x;
    long long l = 0, r = x;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if ((mid / k) * (k - 1) * a + (mid % k) * a + (mid / m) * (m - 1) * b +
                (mid % m) * b >
            x) {
            r = mid - 1;
        } else if ((mid / k) * (k - 1) * a + (mid % k) * a +
                       (mid / m) * (m - 1) * b + (mid % m) * b <
                   x) {
            l = mid + 1;
        } else {
            if (mid % k == 0 && mid % m == 0) {
                mid--;
            }
            l = mid;
            break;
        }
    }
    out << l;
    return 0;
}