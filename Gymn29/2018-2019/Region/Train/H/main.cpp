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
    int n, tmp, mn = 10e6, res = -10e6;
    in >> n;
    vector<int> a, b(2000002, 0);
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
        b[1000000 + tmp]++;
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != 0) {
            mn = min(mn, b[i]);
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (mn == b[i]) {
            res = max(res, i - 1000000);
        }
    }
    out << res << " " << mn;
    return 0;
}
