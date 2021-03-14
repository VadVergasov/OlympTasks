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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, res = 0;
    cin >> n;
    vector<int> a(n);
    set<int> all;
    for (auto &i : a) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        all.insert(t);
    }
    for (auto i : a) {
        auto cur = all.upper_bound(i);
        if (cur != all.end()) {
            res++;
            all.erase(cur);
        }
    }
    cout << res;
    return 0;
}
