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
// https://codeforces.com/contest/1326/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    long long m = 998244353;
    cin >> n >> k;
    vector<pair<long long, int> > p(n);
    vector<int> pos;
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i + 1;
    }
    sort(rbegin(p), rend(p));
    long long sum = 0, res = 1;
    for (int i = 0; i < n && i < k; i++) {
        sum += p[i].first;
        pos.push_back(p[i].second);
    }
    sort(begin(pos), end(pos));
    for (int i = 1; i < pos.size(); i++) {
        res *= (pos[i] - pos[i - 1]);
        res %= m;
    }
    cout << sum << " " << res;
    return 0;
}