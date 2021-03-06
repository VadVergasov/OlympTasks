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
    short int n, tmp, res = 0, o = 1;
    vector<long long> all;
    all.resize(1000, -1);
    vector<vector<short int> > a;
    cin >> n;
    a.resize(n);
    for (short int i = 0; i < n; i++) {
        for (short int j = 0; j < 6; j++) {
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    for (short int i = 0; i < n; i++) {
        for (short int j = 0; j < 6; j++) {
            all[a[i][j]]++;
        }
    }
    if (n > 1) {
        for (short int i = 0; i < n - 1; i++) {
            for (short int j = i + 1; j < n; j++) {
                for (short int i1 = 0; i1 < 6; i1++) {
                    for (short int j1 = 0; j1 < 6; j1++) {
                        all[a[i][i1] * 10 + a[j][j1]]++;
                        all[a[j][j1] * 10 + a[i][i1]]++;
                    }
                }
            }
        }
    }
    if (n > 2) {
        for (short int i = 0; i < 6; i++) {
            for (short int j = 0; j < 6; j++) {
                for (short int k = 0; k < 6; k++) {
                    all[a[0][i] * 100 + a[1][j] * 10 + a[2][k]]++;
                    all[a[0][i] * 100 + a[2][k] * 10 + a[1][j]]++;
                    all[a[1][j] * 100 + a[0][i] * 10 + a[2][k]]++;
                    all[a[1][j] * 100 + a[2][k] * 10 + a[0][i]]++;
                    all[a[2][k] * 100 + a[1][j] * 10 + a[0][i]]++;
                    all[a[2][k] * 100 + a[0][i] * 10 + a[1][j]]++;
                }
            }
        }
    }
    while (all[o] != -1) {
        res++;
        o++;
    }
    cout << res;
    return 0;
}
