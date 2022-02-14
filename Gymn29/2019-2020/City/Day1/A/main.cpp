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
    int n, x, y;
    cin >> x >> y >> n;
    vector<int> c(n);
    for (auto &i : c) {
        cin >> i;
    }
    sort(c.begin(), c.end());
    if (x < y || x < c.front()) {
        cout << x;
        return 0;
    }
    x = max(y, c.front());
    x -= x / c.front();
    cout << x;
    return 0;
}