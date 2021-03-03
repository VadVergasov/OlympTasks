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
    int n, c;
    cin >> n >> c;
    vector<int> a, b, d;
    for (int i = 0; i < n; i++) {
        char t;
        int z;
        cin >> t >> z;
        if (t == 'E') {
            a.push_back(z);
        } else if (t == 'M') {
            b.push_back(z);
        } else {
            d.push_back(z);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(d.begin(), d.end());
    int res = 0;
    int i1 = 0, i2 = 0, i3 = 0;
    while (c - min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                    b[i2] + a[i1]}) >=
           0) {
        cout << a[i1] << " " << b[i2] << " " << d[i3] << endl;
        if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                 b[i2] + a[i1]}) == a[i1] + a[i1 + 1]) {
            i1 += 2;
            c -= a[i1] + a[i1 + 1];
        } else if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                        b[i2] + a[i1]}) == a[i1] + d[i3]) {
            i1++;
            i3++;
            c -= a[i1] + d[i3];
        } else if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                        b[i2] + a[i1]}) == b[i2] + d[i3]) {
            i2++;
            i3++;
            c -= b[i2] + d[i3];
        } else if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                        b[i2] + a[i1]}) == b[i2] + a[i1]) {
            i1++;
            i2++;
            c -= b[i2] + a[i1];
        }
        res++;
    }
    cout << res;
    return 0;
}