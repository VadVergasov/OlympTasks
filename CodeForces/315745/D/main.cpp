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
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<pair<pair<int, int>, vector<int>>> a(n);
    for (int i = 0; i < n; i++) {
        int m, sec;
        cin >> m >> sec;
        a[i].second.resize(m);
        a[i].first.first = sec;
        a[i].first.second = i;
        for (auto &j : a[i].second) {
            cin >> j;
        }
    }
    sort(a.begin(), a.end());
    do {
        vector<int> coords;
        int pos = 0;
        for (auto [f, s] : a) {
            for (auto j : s) {
                coords.push_back(pos + j);
            }
            pos += f.first;
        }
        sort(coords.begin(), coords.end());
        set<int> dist;
        for (int i = 1; i < (int)coords.size(); i++) {
            dist.insert(coords[i] - coords[i - 1]);
        }
        if (dist.size() < 2) {
            cout << "Yes\n";
            for (auto i : a) {
                cout << i.first.second + 1 << " ";
            }
            return 0;
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << "No\n";
    return 0;
}
