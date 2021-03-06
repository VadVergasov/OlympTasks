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
    int n, t, res = 0;
    cin >> n;
    set<int> a, difs;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a.insert(t);
    }
    for (auto i : a) {
        for (auto j : a) {
            if (j == i) {
                continue;
            }
            difs.insert(abs((i) - (j)));
        }
    }
    for (auto i : difs) {
        for (set<int>::iterator j = a.begin(); j != a.end(); j++) {
            int k = 1, cur = (*j);
            while (a.find(cur + i) != a.end()) {
                k++;
                cur += i;
            }
            res = max(res, k);
        }
    }
    cout << res;
    return 0;
}