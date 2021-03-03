"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> b(m + 1);
    multiset<int> p;
    vector<pair<int, int> > diffs(m);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        p.insert(t);
    }
    for (int i = 0; i < m + 1; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
        diffs[i] = make_pair(b[i + 1] - b[i], i);
    }
    sort(diffs.rbegin(), diffs.rend());
    for (int i = 0; i < k; i++) {
        int j = 0;
        auto cur = p.find(diffs[j].second);
        while (cur == p.end()) {
            j++;
            cur = p.find(diffs[j].second);
        }
        p.erase(cur);
        p.insert(*cur + 1);
    }
    for (auto i : p) {
        res += b[i];
    }
    cout << res;
    return 0;
}