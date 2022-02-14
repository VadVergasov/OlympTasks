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
    int n, m;
    cin >> n >> m;
    vector<vector<int> > s(n);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        s[t1 - 1].push_back(t2 - 1);
    }
    for (int i = 0; i < n; i++) {
        sort(s[i].rbegin(), s[i].rend());
    }
    for (int i = 0; i < n; i++) {
        multiset<int> to;
        int res = 0;
        int cur = i;
        int rest = m;
        vector<vector<int> > t = s;
        while (rest) {
            if (to.find(cur) != to.end()) {
                rest -= to.count(cur);
                to.erase(cur);
            }
            if (t[cur].size() != 0) {
                // cout << cur << " " << t[cur].front() << "\n";
                to.insert(t[cur].front());
                /*for (auto i : to) {
                    cout << i << " ";
                }
                cout << "\n\n";*/
                t[cur].erase(t[cur].begin(), t[cur].begin() + 1);
            }
            cur++;
            res++;
            if (cur == n) {
                cur = 0;
            }
        }
        cout << res - 1 << " ";
    }
    return 0;
}