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

short int lucky[14] = {4,   7,   44,  47,  74,  77,  444,
                       447, 474, 477, 744, 747, 774, 777};

int main() {
    short int n;
    bool b = false;
    cin >> n;
    for (short int i = 0; i < 14; i++) {
        if (n % lucky[i] == 0) {
            b = true;
            break;
        }
    }
    if (b) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
