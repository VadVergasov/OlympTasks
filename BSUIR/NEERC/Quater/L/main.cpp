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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    unordered_map<long long, long long> mp;
    for (long long i = 1; (i + 1) * (i + 1) <= 1e12; i++) {
        mp[i] = mp[i - 1] + i * ((i + 1) * (i + 1) - i * i);
    }
    while (t--) {
        long long x;
        cin >> x;
        long long res = 0;
        long long sq = sqrt(x);
        if (sq == 1) {
            res = (x - sq * sq + 1) * sq;
        } else {
            res = mp[sq - 1] + (x - sq * sq + 1) * sq;
        }
        cout << res << '\n';
    }
    return 0;
}
