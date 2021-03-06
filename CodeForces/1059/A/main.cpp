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
    int n, l, a, tmp1, tmp2;
    cin >> n >> l >> a;
    if (n == 0) {
        cout << l / a;
        return 0;
    }
    vector<pair<int, int> > b;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        b.push_back(make_pair(tmp1, tmp2));
    }
    int res = 0;
    res += b[0].first / a;
    for (int i = 0; i < n - 1; i++) {
        res += (b[i + 1].first - b[i].first - b[i].second) / a;
    }
    res += (l - b[b.size() - 1].first - b[b.size() - 1].second) / a;
    cout << res;
    return 0;
}
