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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    int res = 1e9;
    vector<int> b = a;
    for (int i = 0; i < n; i++) {
        if (1e9 - b[i] < b[i]) {
            b[i] = 1e9 - b[i];
        }
    }
    int mx = 0, mn = 1e9;
    for (auto i : b) {
        mx = max(mx, i);
        mn = min(mn, i);
    }
    res = min(res, mx - mn);
    b = a;
    mx = 0;
    mn = 1e9;
    for (auto &i : b) {
        if (1e9 - i > i) {
            i = 1e9 - i;
        }
    }
    for (auto i : b) {
        mn = min(mn, i);
        mx = max(mx, i);
    }
    res = min(res, mx - mn);
    cout << res;
    return 0;
}