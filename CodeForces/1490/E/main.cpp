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
        vector<long long> sum(n);
        vector<pair<long long, int> > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i + 1;
        }
        sort(a.begin(), a.end());
        sum[0] = a[0].first;
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + a[i].first;
        }
        int l = 0, r = n - 1;
        while (l < r) {
            int m = (l + r) / 2;
            bool f = true;
            long long cur = sum[m];
            for (int i = m + 1; i < n; i++) {
                if (cur >= a[i].first) {
                    cur += a[i].first;
                } else {
                    f = false;
                    break;
                }
            }
            if (f) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        vector<int> res;
        for (int i = l; i < n; i++) {
            res.push_back(a[i].second);
        }
        sort(res.begin(), res.end());
        cout << res.size() << "\n";
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
