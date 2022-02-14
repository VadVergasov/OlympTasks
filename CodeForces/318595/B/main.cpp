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

bool comp(pair<long long, long long> a, pair<long long, long long> b) {
    return a.first - a.second > b.first - b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, a, b;
    long long sum = 0, res = 0;
    cin >> n >> a >> b;
    vector<pair<long long, long long> > c(n);
    for (auto &[f, s] : c) {
        cin >> f >> s;
        sum += s;
    }
    if (b == 0) {
        cout << sum;
        return 0;
    }
    sort(c.begin(), c.end(), comp);
    for (long long i = 0; i < min(n, b); i++) {
        if (c[i].first > c[i].second) {
            sum = sum - c[i].second + c[i].first;
        }
    }
    res = sum;
    for (long long i = 0; i < n; i++) {
        if (i >= b) {
            res = max(res, sum - c[i].second + (c[i].first << a) -
                               max(c[b - 1].first, c[b - 1].second) +
                               c[b - 1].second);
        } else {
            res = max(res,
                      sum - max(c[i].first, c[i].second) + (c[i].first << a));
        }
    }
    cout << res;
    return 0;
}
