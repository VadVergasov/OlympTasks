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

int a[3];

int main() {
    int n, tmp, res;
    cin >> n;
    vector<vector<int> > b(3);
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        b[tmp - 1].push_back(i + 1);
        a[tmp - 1]++;
    }
    res = min(a[0], min(a[1], a[2]));
    cout << res << "\n";
    for (int i = 0; i < res; i++) {
        cout << b[0][i] << " " << b[1][i] << " " << b[2][i] << "\n";
    }
    return 0;
}
