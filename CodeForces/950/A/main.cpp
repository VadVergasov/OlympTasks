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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && c == 0 || b == 0 && c == 0) {
        cout << 0;
    } else {
        if (b > a) {
            if (b >= a + c) {
                cout << (a + c) * 2;
            } else {
                for (int i = 0; i < c; i++) {
                    a > b ? b++ : a++;
                }
                cout << min(a, b) * 2;
            }
        } else {
            if (a >= b + c) {
                cout << (b + c) * 2;
            } else {
                for (int i = 0; i < c; i++) {
                    a > b ? b++ : a++;
                }
                cout << min(a, b) * 2;
            }
        }
    }
    return 0;
}
