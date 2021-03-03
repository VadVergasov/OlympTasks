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
    int n;
    cin >> n;
    vector<pair<pair<long long, long long>, long long>> a(n);
    for (int i = 0; i < n; i++) {
        long long sum = 0, t, cur, mx = -1;
        cin >> t;
        for (int i = 0; i < t; i++) {
            cin >> cur;
            sum += cur;
            mx = max(mx, cur);
        }
        a[i] = make_pair(make_pair(mx, sum), t);
    }
    sort(a.rbegin(), a.rend());
    int mx = a[0].first.first;
    long long res = 0;
    for (int i = 1; i < n; i++) {
        res += a[i].second * (mx - a[i].first.first);
    }
    cout << res;
    return 0;
}