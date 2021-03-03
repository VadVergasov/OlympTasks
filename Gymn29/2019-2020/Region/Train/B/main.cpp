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
    ofstream out("output.txt");
    ifstream in("input.txt");
    char a, b;
    int y1, y2;
    in >> a >> y1 >> b >> y2;
    int x1 = a - 'a', x2 = b - 'a';
    y1--;
    y2--;
    if (abs(y2 - y1) == 2 && abs(x2 - x1) == 1 ||
        abs(y2 - y1) == 1 && abs(x2 - x1) == 2) {
        out << "YN";
    } else {
        out << "N";
        if (abs(y2 - y1) == 4 && abs(x2 - x1) == 2 ||
            abs(y2 - y1) == 2 && abs(x2 - x1) == 4 ||
            abs(y2 - y1) == 3 && abs(x2 - x1) == 3 ||
            (abs(y2 - y1) == 1 && abs(x2 - x1) == 1 &&
             (x1 != 7 && y1 != 7 && x1 != 0 && y1 != 0)) ||
            abs(y2 - y1) == 2 && abs(x2 - x1) == 0 ||
            abs(y2 - y1) == 0 && abs(x2 - x1) == 2) {
            out << "Y";
        } else {
            out << "N";
        }
    }
    if (abs(y2 - y1) <= 1 && abs(x2 - x1) <= 1) {
        out << "YN";
    } else {
        out << "N";
        if (abs(y2 - y1) <= 2 && abs(x2 - x1) <= 2) {
            out << "Y";
        } else {
            out << "N";
        }
    }
    return 0;
}
