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
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    set<int> x, y;
    for (int i = 0; i < n; i++) {
        int x0, y0;
        cin >> x0 >> y0;
        mp[{x0, y0}] = i + 1;
        x.insert(x0);
        y.insert(y0);
    }
    set<set<int> > all;
    for (auto x0 : x) {
        for (auto y0 : y) {
            for (auto x1 : x) {
                for (auto y1 : y) {
                    pair<int, int> first = {x0, y0}, second = {x1, y1};
                    set<int> cur;
                    for (auto k : mp) {
                        if (min(first.first, second.first) <= k.first.first &&
                            max(first.first, second.first) >= k.first.first &&
                            min(first.second, second.second) <=
                                k.first.second &&
                            max(first.second, second.second) >=
                                k.first.second) {
                            cur.insert(k.second);
                        }
                    }
                    all.insert(cur);
                }
            }
        }
    }
    cout << all.size();
    return 0;
}
