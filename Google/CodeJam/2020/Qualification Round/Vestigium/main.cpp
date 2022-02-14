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

int main() {
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        int n;
        cin >> n;
        vector<vector<int> > a(n, vector<int>(n));
        int sum = 0, r = 0, c = 0;
        for (auto &i : a) {
            for (auto &j : i) {
                cin >> j;
            }
        }
        for (int i = 0; i < n; i++) {
            sum += a[i][i];
        }
        for (int i = 0; i < n; i++) {
            set<int> all;
            bool res = false;
            for (int j = 0; j < n; j++) {
                if (all.find(a[i][j]) != all.end()) {
                    res = true;
                    break;
                }
                all.insert(a[i][j]);
            }
            if (res) {
                r++;
            }
        }
        for (int i = 0; i < n; i++) {
            set<int> all;
            bool res = false;
            for (int j = 0; j < n; j++) {
                if (all.find(a[j][i]) != all.end()) {
                    res = true;
                    break;
                }
                all.insert(a[j][i]);
            }
            if (res) {
                c++;
            }
        }
        cout << "Case #" << cur + 1 << ": " << sum << " " << r << " " << c
             << "\n";
    }
    return 0;
}