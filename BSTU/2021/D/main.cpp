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
    int n;
    cin >> n;
    vector<int> a(2 * 1e5 + 1);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a[t]++;
    }
    int res = 0;
    vector<pair<int, int> > r;
    int i = 1;
    while (i <= 2 * 1e5) {
        while (a[i] != 0) {
            int j = i;
            while (a[j] != 0) {
                a[j]--;
                j++;
            }
            j--;
            res++;
            r.push_back(make_pair(i, j));
        }
        i++;
    }
    cout << res << "\n";
    for (int i = 0; i < res; i++) {
        cout << r[i].first << " " << r[i].second << "\n";
    }
    return 0;
}
