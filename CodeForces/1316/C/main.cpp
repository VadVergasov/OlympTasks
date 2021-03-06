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
// https://codeforces.com/contest/1316/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> a(n), b(m);
    for (auto &i : a) {
        cin >> i;
        i %= p;
    }
    for (auto &i : b) {
        cin >> i;
        i %= p;
    }
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            pos1 = i;
            break;
        }
    }
    for (int i = 0; i < m; i++) {
        if (b[i]) {
            pos2 = i;
            break;
        }
    }
    cout << pos1 + pos2;
    return 0;
}