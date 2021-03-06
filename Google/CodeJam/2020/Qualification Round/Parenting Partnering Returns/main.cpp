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
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        int n;
        cin >> n;
        vector<pair<pair<int, int>, int> > all(n);
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            all[i] = {{a, b}, i};
        }
        sort(begin(all), end(all));
        cout << "Case #" << cur << ": ";
        int jamie = 0, cameron = 0;
        string res;
        res.resize(n, 'A');
        for (int i = 0; i < n; i++) {
            if (cameron <= all[i].first.first) {
                cameron = all[i].first.second;
                res[all[i].second] = 'C';
            } else if (jamie <= all[i].first.first) {
                jamie = all[i].first.second;
                res[all[i].second] = 'J';
            } else {
                res = "IMPOSSIBLE";
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}