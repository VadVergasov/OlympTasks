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
    int n, res = 0, s = 0, e = 0, cur = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            cur++;
        } else {
            res = max(res, cur);
            cur = 0;
        }
    }
    int i = 0;
    while (a[i] == 1) {
        i++;
    }
    s = i;
    i = n - 1;
    while (a[i] == 1) {
        i--;
    }
    e = n - i - 1;
    res = max(res, s + e);
    cout << res;
    return 0;
}