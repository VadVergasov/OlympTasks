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
// https://codeforces.com/contest/1325/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long u, v, u1;
    cin >> u >> v;
    if (u > v) {
        cout << -1;
        return 0;
    }
    u1 = u;
    vector<int> bits;
    int mx = 0;
    for (int i = 0; i < 60; i++) {
        if (u1 & (1LL << i)) {
            mx = max(mx, i + 1);
        }
    }
    long long cur = (1LL << mx) - 1;
    while (cur > v) {
        for (int i = 60; i >= 0; i--) {
            if ((cur ^ u) & (1LL << i)) {
                cur -= (1LL << i);
            }
        }
    }
    return 0;
}