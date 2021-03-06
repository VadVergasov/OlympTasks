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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m)), b(m, vector<int>(n));
        for (auto &i : a) {
            for (auto &j : i) {
                cin >> j;
            }
        }
        for (auto &i : b) {
            for (auto &j : i) {
                cin >> j;
            }
        }
        vector<int> order(n, -1);
        int stolb = -1;
        for (int i = 0; i < n && stolb == -1; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == b[0][0]) {
                    stolb = j;
                    break;
                }
            }
        }
        int cur = 0;
        while (cur < n) {
            for (int i = 0; i < n; i++) {
                if (a[i][stolb] == b[0][cur]) {
                    order[cur] = i;
                    break;
                }
            }
            cur++;
        }
        for (auto i : order) {
            for (auto j : a[i]) {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
