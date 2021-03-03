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
    int x1, x2, y1, y2, n, xv = 0, yv = 0, xdif, ydif, xcur, ycur, res = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> n;
    xcur = x1;
    ycur = y1;
    xdif = x1 - x2;
    ydif = y1 - y2;
    string s;
    cin >> s;
    for (int i = 0; i < n && (xcur != x2 || ycur != y2); i++) {
        res++;
        if (s[i] == 'U') {
            yv++;
            if (y2 - ycur > 0) {
                if (abs(ycur - y2) > abs(xcur - x2)) {
                    ycur += 2;
                } else {
                    ycur++;
                    if (x2 - xcur > 0) {
                        xcur++;
                    } else {
                        xcur--;
                    }
                }
            }
        } else if (s[i] == 'D') {
            yv--;
            if (y2 - ycur < 0) {
                if (abs(ycur - y2) > abs(xcur - x2)) {
                    ycur -= 2;
                } else {
                    ycur--;
                    if (x2 - xcur > 0) {
                        xcur++;
                    } else {
                        xcur--;
                    }
                }
            }
        } else if (s[i] == 'R') {
            xv++;
            if (x2 - xcur > 0) {
                if (abs(xcur - x2) > abs(ycur - y2)) {
                    xcur += 2;
                } else {
                    xcur++;
                    if (y2 - ycur > 0) {
                        ycur++;
                    } else {
                        ycur--;
                    }
                }
            }
        } else {
            xv--;
            if (x2 - xcur < 0) {
                if (abs(xcur - x2) > abs(ycur - y2)) {
                    xcur -= 2;
                } else {
                    xcur--;
                    if (y2 - ycur > 0) {
                        ycur++;
                    } else {
                        ycur--;
                    }
                }
            }
        }
    }
    cout << xcur << " " << ycur << "\n";
    if ((xv + yv) * -1 == n) {
        cout << -1;
        return 0;
    }
    cout << res;
    return 0;
}