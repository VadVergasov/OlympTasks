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
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        a[i] = make_pair(t1, t2);
    }
    int k = 0;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (a[i].first <= k && a[i].second >= k) {
            cout << n - i;
            return 0;
        }
    }
    return 0;
}