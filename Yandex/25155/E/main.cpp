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

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

using namespace std;

unsigned int x, y, z, t;

unsigned int rng61() {
    x = x ^ (x << 16);
    x = x ^ (x >> 5);
    x = x ^ (x << 1);
    t = x;
    x = y;
    y = z;
    z = (t ^ x) ^ y;
    return z;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    unsigned int n, m, k, d, e;
    scanf("%u %u %u %u %u", &n, &m, &k, &d, &e);
    unsigned int a[n];
    x = k;
    y = d;
    z = e;
    for (int i = 0; i < (int)n; i++) {
        a[i] = rng61();
    }
    vector<pair<int, int>> b(m);
    for (int i = 0; i < (int)m; i++) {
        scanf("%u", &b[i].first);
        b[i].first--;
        b[i].second = i;
    }
    sort(b.rbegin(), b.rend());
    vector<unsigned int> res(m);
    nth_element(a, a + b[0].first, a + n);
    res[b[0].second] = a[b[0].first];
    for (int i = 1; i < (int)m; i++) {
        nth_element(a, a + b[i].first, a + b[i - 1].first);
        res[b[i].second] = a[b[i].first];
    }
    for (int i = 0; i < (int)m; i++) {
        printf("%u ", res[i]);
    }
    return 0;
}
