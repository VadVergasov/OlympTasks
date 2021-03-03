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
    int n, w, tmp, mx = 0, mn, cur1 = 0, cur2;
    cin >> n >> w;
    mn = w;
    cur2 = w;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        cur1 += a[i];
        cur2 += a[i];
        mx = max(mx, cur2 - w);
        mn = min(mn, cur1 - w);
    }
    cout << mx - (w - abs(mn));
    return 0;
}
