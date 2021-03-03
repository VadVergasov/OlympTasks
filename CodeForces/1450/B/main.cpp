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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int> > a(n);
        for (auto &i : a) {
            cin >> i.first >> i.second;
        }
        bool r = false;
        for (int i = 0; i < n; i++) {
            long long mx = 0;
            for (int j = 0; j < n; j++) {
                mx = max(mx, (long long)(abs(a[i].first - a[j].first) +
                                         abs(a[i].second - a[j].second)));
            }
            if (mx > k) {
                continue;
            } else {
                r = true;
                cout << "1\n";
                break;
            }
        }
        if (!r) {
            cout << "-1\n";
        }
    }
    return 0;
}
