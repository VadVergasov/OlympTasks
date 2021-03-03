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
    ifstream in("input.txt");
    ofstream out("output.txt");
    double x1, y1, r1, x2, y2, r2;
    in >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) <= r1 + r2 &&
        sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + r1 >= r2 &&
        sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + r2 >= r1) {
        out << "YES";
    } else {
        out << "NO";
    }
    return 0;
}
