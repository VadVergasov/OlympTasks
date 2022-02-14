// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <bits/stdc++.h>

using namespace std;

ofstream out("b.out");
ifstream in("b.in");

int main() {
    int n, tmp;
    in >> n;
    vector<vector<int> > a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            in >> tmp;
            a[i].push_back(tmp);
        }
    }
    b[0] = a[0][0];
    if (n > 1) {
        b[1] = min(a[0][1], b[0] + a[1][0]);
        for (int i = 3; i < n; i++) {
            b[i] = min(b[i - 2] + b[i - 1] + a[i][0],
                       min(b[i - 3] + a[i - 2][2], b[i - 2] + a[i - 1][1]));
        }
    }
    out << b[n - 1];
    return 0;
}
