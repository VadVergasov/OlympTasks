// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), pref;
        pref.reserve(n + 1);
        pref.push_back(0);
        for (auto &i : a) {
            cin >> i;
            i %= m;
            pref.push_back((i + pref.back()) % m);
        }
        set<int> s;
        s.insert(0);
        int res = 0;
        for (auto i : pref) {
            res = max(
                {res, (i - *s.begin() + 2 * m) % m,
                 (i - ((s.upper_bound(i) == s.end()) ? 0 : *s.upper_bound(i)) +
                  2 * m) %
                     m});
            s.insert(i);
        }
        cout << res << '\n';
    }
}