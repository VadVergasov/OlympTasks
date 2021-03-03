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

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

long long binpow(long long n, long long p, long long m) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n % m;
            res %= m;
        }
        n = (n % m) * (n % m);
        n %= m;
        p >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, M;
    cin >> n >> M;
    vector<pair<long long, long long> > a(n);
    for (auto &i : a) {
        cin >> i.first >> i.second;
    }
    for (int i = 0; i < n; i++) {
        cout << binpow(a[i].first % M, a[i].second % M, M) << " ";
    }
    return 0;
}