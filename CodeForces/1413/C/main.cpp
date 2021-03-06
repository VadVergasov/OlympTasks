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
    vector<int> a(6);
    for (auto &i : a) {
        cin >> i;
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &i : b) {
        cin >> i;
    }
    vector<pair<int, int> > notes;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < n; j++) {
            notes.push_back({b[j] - a[i], j});
        }
    }
    sort(notes.begin(), notes.end());
    multiset<int> cur, lads;
    int i1 = 0, i2 = 0;
    long long res = 1e9;
    while (i2 < notes.size()) {
        if (cur.size() < n) {
            cur.insert(notes[i2].second);
            lads.insert(notes[i2].first);
            i2++;
        } else {
            res = min(res, (long long)(*(--lads.end()) - *lads.begin()));
            cur.erase(cur.find(notes[i1].second));
            lads.erase(lads.find(notes[i1].first));
            i1++;
        }
    }
    cout << res;
    return 0;
}
