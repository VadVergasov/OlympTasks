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

long long count(vector<long long> &p, int l, int a, int b, int x, int y) {
    long long ans = 0;
    int xy = 0, xx = 0, yy = 0;
    for (int i = 1; i <= l; i++) {
        if (i % a == 0 && i % b == 0) {
            xy++;
        } else if (i % a == 0) {
            xx++;
        } else if (i % b == 0) {
            yy++;
        }
    }
    for (int i = 0; i < xy; i++) {
        ans += p[i] * (x + y) / 100;
    }
    for (int i = 0; i < xx; i++) {
        ans += p[xy + i] * x / 100;
    }
    for (int i = 0; i < yy; i++) {
        ans += p[xy + xx + i] * y / 100;
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        vector<long long> p(n);
        for (int j = 0; j < n; j++) {
            cin >> p[j];
        }
        sort(p.rbegin(), p.rend());
        long long x, y, a, b, k, sum = 0;
        cin >> x >> a >> y >> b >> k;
        if (x < y) {
            swap(x, y);
            swap(a, b);
        }
        long long l = 0, r = n + 1;
        while (r - l > 1) {
            long long m = (l + r) / 2;
            if (count(p, m, a, b, x, y) >= k) {
                r = m;
            } else {
                l = m;
            }
        }
        if (r > n) {
            r = -1;
        }
        cout << r << "\n";
    }
    return 0;
}