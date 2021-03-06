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

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
    return a.first.first + a.first.second > b.first.first + b.first.second;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<pair<int, int>, int> > a(k);
    vector<vector<bool> > f(n + 1, vector<bool>(m + 1, false));
    int cnt = 0;
    for (auto& [f, s] : a) {
        cin >> f.first >> f.second;
        cnt++;
        s = cnt;
    }
    int res = 0;
    sort(begin(a), end(a), cmp);
    vector<pair<int, char> > r;
    for (int i = 0; i < k; i++) {
        pair<int, int> now = {1, 1};
        while (now != a[i].first) {
            if (a[i].first.first > now.first && !f[now.first + 1][now.second]) {
                r.push_back({a[i].second, 'D'});
                now.first++;
            } else {
                r.push_back({a[i].second, 'R'});
                now.second++;
            }
            res++;
        }
        f[a[i].first.first][a[i].first.second] = true;
    }
    cout << res << "\n";
    for (auto [f, s] : r) {
        cout << f << " " << s << "\n";
    }
    return 0;
}