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
    vector<int> a(n + 1, 0), path(n + 1, -1);
    a[0] = 1;
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + 1;
        if (i % 2 == 0) {
            a[i] = min(a[i], a[i / 2] + 1);
        }
        if (i % 3 == 0) {
            a[i] = min(a[i], a[i / 3] + 1);
        }
        if (a[i] == a[i - 1] + 1) {
            path[i] = i - 1;
        } else if (i % 2 == 0 && a[i] == a[i / 2] + 1) {
            path[i] = i / 2;
        } else if (i % 3 == 0) {
            path[i] = i / 3;
        }
    }
    cout << a[n] << "\n";
    int cur = n;
    vector<int> res;
    for (int i = 0; i <= a[n]; i++) {
        res.push_back(cur);
        cur = path[cur];
    }
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}