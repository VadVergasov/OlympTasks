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
    int n, mn = 1e6, pos;
    cin >> n;
    vector<int> q(n - 1), res(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> q[i];
        if (mn != q[i]) {
            mn = min(mn, q[i]);
            if (mn == q[i]) {
                pos = i + 1;
            }
        }
    }
    res[pos] = 1;
    for (int i = pos - 1; i >= 0; i--) {
        res[i] = res[i + 1] - q[i];
    }
    for (int i = pos + 1; i < n; i++) {
        res[i] = res[i - 1] + q[i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}