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
    ifstream in("prizes.in");
    ofstream out("prizes.out");
    int n;
    in >> n;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    int mx1 = min(a.front(), a[1]), mx2 = max(a.front(), a[1]);
    out << mx1 << " ";
    for (int i = 2; i < n; i++) {
        if (mx2 <= a[i]) {
            mx1 = mx2;
            mx2 = a[i];
        } else if (mx1 < a[i]) {
            mx1 = a[i];
        }
        out << mx1 << " ";
    }
    return 0;
}