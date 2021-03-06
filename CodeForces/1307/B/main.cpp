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
// https://codeforces.com/contest/1307/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, x;
        cin >> n >> x;
        set<int> a;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            a.insert(t);
        }
        if (a.find(x) != a.end()) {
            cout << "1\n";
        } else {
            cout << max(2, (int)ceil((double)x / (double)(*(--a.end()))))
                 << "\n";
        }
    }
    return 0;
}