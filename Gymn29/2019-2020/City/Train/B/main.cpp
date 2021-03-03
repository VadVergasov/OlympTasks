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
    int m, w;
    in >> m >> w;
    vector<int> n(m);
    for (int i = 0; i < m; i++) {
        in >> n[i];
    }
    int s, b, t;
    in >> s >> b >> t;
    int day = 0, day_of_week = s;
    if (s < b) {
        day_of_week = b;
        day += b - s;
    } else if (b < s) {
        day_of_week = b;
        day += w - s + b;
    }
    int month = 0, res = 0;
    while (month < m) {
        if (day == t) {
            res++;
        }
        if (day > n[month]) {
            day -= n[month];
            month++;
        }
        day += w;
    }
    out << res;
    return 0;
}