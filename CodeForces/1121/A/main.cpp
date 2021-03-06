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
    int n, m, k, res = 0;
    cin >> n >> m >> k;
    vector<int> p(n), s(n);
    vector<vector<int> > sc(m + 1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s[i] = t;
        sc[t].push_back(p[i]);
    }
    for (int i = 0; i < m + 1; i++) {
        sort(sc[i].begin(), sc[i].end());
    }
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        t--;
        if (sc[s[t]].back() != p[t]) {
            res++;
        }
    }
    cout << res;
    return 0;
}