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
    int n, res = 0, cur = 1;
    vector<int> a(n);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.push_back(0);
    for (int i = 0; i < n; i++) {
        if (a[i] < a[i + 1]) {
            cur++;
        } else {
            res = max(res, cur);
            cur = 1;
        }
    }
    cout << res;
    return 0;
}