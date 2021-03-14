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
    long long n, h, k, l, cost, sum = 0;
    cin >> n >> h >> k >> l >> cost;
    sum = k * l;
    vector<pair<long long, long long> > a(n);
    for (auto &[f, s] : a) {
        cin >> f >> s;
        sum += f;
    }
    if (sum < h) {
        cout << -1;
        return 0;
    }
    long long cur = 0, res = 1e18;
    sum = 0;
    if (k * l >= h) {
        res = ceil((double)h / (double)l) * cost;
    }
    for (int i = 0; i < n; i++) {
        cur += a[i].first;
        sum += a[i].second;
        long long other = max(0LL, h - cur);
        long long ops = ceil((double)other / (double)l);
        if (ops <= k) {
            res = min(res, sum + ops * cost);
        }
    }
    cout << res;
    return 0;
}
