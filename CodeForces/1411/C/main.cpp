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
    int t;
    cin >> t;
    while (t--) {
        int n, m, right = 0;
        cin >> n >> m;
        vector<pair<int, int> > c(m);
        vector<int> x(n), y(n);
        for (auto &[i, j] : c) {
            cin >> i >> j;
            i--;
            j--;
            if (i == j) {
                right++;
            }
            x[i]++;
            y[j]++;
        }
        int res = 0;
        for (int i = 0; i < m; i++) {
            if (c[i].first != c[i].second &&
                (y[c[i].first] != 0 || x[c[i].second] != 0)) {
                y[c[i].first] = 0;
                x[c[i].second] = 0;
                res++;
            }
            res++;
        }
        cout << res << "\n";
    }
    return 0;
}
