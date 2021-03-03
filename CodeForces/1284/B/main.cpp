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
    int n, num = 0;
    cin >> n;
    vector<vector<int> > a(n);
    vector<pair<int, int> > d(n, make_pair(10e8, 0));
    vector<bool> f(n, false);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a[i].resize(t);
        for (int j = 0; j < t; j++) {
            cin >> a[i][j];
            d[i].first = min(d[i].first, a[i][j]);
            d[i].second = max(d[i].second, a[i][j]);
            if (j == 0) {
                continue;
            }
            if (a[i][j] > a[i][j - 1]) {
                f[i] = true;
                num++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (f[i]) {
            d[i].first = -1;
            d[i].second = -1;
        }
    }
    vector<int> mx(n);
    for (int i = 0; i < n; i++) {
        mx[i] = d[i].second;
    }
    sort(mx.begin(), mx.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        if (f[i]) {
            res += n;
        } else {
            auto j = upper_bound(mx.begin(), mx.end(), d[i].first);
            res += (mx.end() - j) + num;
        }
    }
    cout << res;
    return 0;
}