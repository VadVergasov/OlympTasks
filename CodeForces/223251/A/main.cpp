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
    int n, q, tmp;
    cin >> n;
    vector<int> cost, res;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        cost.push_back(tmp);
    }
    sort(cost.begin(), cost.end());
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> tmp;
        res.push_back(upper_bound(cost.begin(), cost.end(), tmp) -
                      cost.begin());
    }
    for (int i = 0; i < q; i++) {
        cout << res[i] << "\n";
    }
    return 0;
}
