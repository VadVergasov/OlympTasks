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
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        map<int, int> mp, cnt;
        for (auto &i : a) {
            cin >> i;
            mp[i]++;
        }
        for (auto [f, s] : mp) {
            cnt[s]++;
        }
        long long res = 1e18, cnt1 = 0;
        for (auto [f, s] : cnt) {
            long long cur = (long long)(n - f * s);
            for (auto [i, j] : cnt) {
                if (i > f) {
                    cur -= f * j;
                }
            }
            res = min(res, cur);
        }
        cout << res << "\n";
    }
    return 0;
}
