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
    bool res = false;
    int a[6], sum = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
    for (int i = 0; i < 6; i++) {
        sum += a[i];
    }
    if (sum % 2 == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                for (int n = j + 1; n < 6; n++) {
                    if (a[i] + a[j] + a[n] == sum / 2) {
                        res = true;
                        break;
                    }
                }
            }
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
