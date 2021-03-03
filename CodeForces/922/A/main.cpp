"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    if (y == 0 || x != 0 && y == 1) {
        cout << "NO";
        return 0;
    }
    if (y - 1 == x && y > 0) {
        cout << "YES";
        return 0;
    }
    int i = y - 1;
    while (i < x) {
        i += 2;
    }
    if (i == x) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
    }
    return 0;
}
