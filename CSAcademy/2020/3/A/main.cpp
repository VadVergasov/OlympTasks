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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (abs(x1 - x3) + abs(y1 - y3) ==
            (int)max(abs(x2 - x3), abs(y2 - y3))) {
            cout << "Same time\n";
        } else if (abs(x1 - x3) + abs(y1 - y3) >
                   max(abs(x2 - x3), abs(y2 - y3))) {
            cout << "Second\n";
        } else {
            cout << "First\n";
        }
    }
    return 0;
}