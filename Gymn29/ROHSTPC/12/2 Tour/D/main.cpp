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
    int k, n;
    cin >> k >> n;
    vector<deque<int> > res(k);
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 0; i < n; i++) {
        res[a[i].second - 1].push_front(a[i].first);
    }
    for (int i = 0; i < k; i++) {
        if (res[i].empty()) {
            cout << 0 << "\n";
            continue;
        }
        cout << res[i].size() << " ";
        for (int j = 0; j < max(0, (int)res[i].size() - 1); j++) {
            cout << res[i][j] << " ";
        }
        cout << res[i].back() << "\n";
    }
    return 0;
}