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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> > s(n);
    vector<int> res(m);
    for (auto &[l, r] : s) {
        cin >> l >> r;
    }
    for (int i = 2; i <= m; i++) {
        int count = 1;
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            int z = i;
            while (z < s[j].first) {
                z += i;
            }
            while (z <= s[j].second) {
                z += i;
                cnt++;
            }
            count *= cnt;
        }
        res[i - 1] = count;
    }
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}