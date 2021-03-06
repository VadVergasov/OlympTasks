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
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    if (max(a, c) - min(a, c) != max(b, d) - min(b, d)) {
        cout << -1;
        return 0;
    }
    if (n == 1) {
        if (a > c) {
            if (b > d) {
                cout << max(a, b);
                return 0;
            } else {
                cout << max(a, d);
                return 0;
            }
        } else {
            if (b > d) {
                cout << max(c, b);
                return 0;
            } else {
                cout << max(c, d);
                return 0;
            }
        }
    }
    return 0;
}
