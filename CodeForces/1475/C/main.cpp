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
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        vector<pair<int, int> > c(k);
        unordered_map<int, int> cnt;
        for (auto &i : c) {
            cin >> i.first;
            cnt[i.first]++;
        }
        for (auto &i : c) {
            cin >> i.second;
            cnt[-i.second]++;
        }
        long long res = 0;
        for (int i = 0; i < k; i++) {
            res += k - cnt[c[i].first] - cnt[-c[i].second] + 1;
        }
        cout << res / 2 << "\n";
    }
    return 0;
}