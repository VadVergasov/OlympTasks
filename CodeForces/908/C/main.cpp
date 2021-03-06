// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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

int main() {
    vector<double> res;
    short int n, r, tmp;
    cin >> n >> r;
    vector<short int> c;
    for (short int i = 0; i < n; i++) {
        cin >> tmp;
        c.push_back(tmp);
    }
    res.push_back(r);
    for (short int i = 1; i < n; i++) {
        res.push_back(r);
        for (short int j = i - 1; j >= 0; j--) {
            if (abs(c[i] - c[j]) <= r * 2) {
                res[res.size() - 1] = max(
                    res[res.size() - 1], sqrt(((r + r) * (r + r)) -
                                              ((c[i] - c[j]) * (c[i] - c[j]))) +
                                             res[j]);
            }
        }
    }
    for (short int i = 0; i < n; i++) {
        cout << fixed << setprecision(10) << res[i] << " ";
    }
    return 0;
}
