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
    int a1, a2;
    cin >> a1 >> a2;
    int res = 0;
    while ((a1 > 0 && a2 > 2) || (a2 > 0 && a1 > 2)) {
        if (a1 > a2) {
            a2++;
            a1 -= 2;
        } else {
            a1++;
            a2 -= 2;
        }
        res++;
    }
    if (a2 > 1 || a1 > 1) {
        res++;
    }
    cout << res;
    return 0;
}