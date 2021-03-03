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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n, x1, x2, y1, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        if (y1 < y2) {
            if (y1 == (n - y2 + 1)) {
                if ((y2 - y1) % 2 == 0) {
                    cout << "Draw\n";
                } else {
                    if (x1 != x2) {
                        cout << "Draw\n";
                    } else {
                        cout << "Miron\n";
                    }
                }
            } else {
                if (y1 > n - y2 + 1) {
                    cout << "Miron\n";
                } else {
                    cout << "Slava\n";
                }
            }
        } else if (y1 == y2) {
            cout << "Draw\n";
        } else {
            if ((n - y1 + 1) == y2) {
                if ((y2 - y1) % 2 == 0) {
                    cout << "Draw\n";
                } else {
                    if (x1 != x2) {
                        cout << "Draw\n";
                    } else {
                        cout << "Miron\n";
                    }
                }
            } else {
                if (n - y1 + 1 > y2) {
                    cout << "Miron\n";
                } else {
                    cout << "Slava\n";
                }
            }
        }
    }
    return 0;
}