// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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

#pragma GCC optimize("Ofast,unroll-loops")

using namespace std;

void get(int l, int r, int d, vector<int> &a, vector<int> &res) {
    if (l > r) {
        return;
    }
    if (l == r) {
        res[l] = d;
        return;
    }
    int mx = 0, pos = -1;
    for (int i = l; i <= r; i++) {
        if (a[i] > mx) {
            mx = a[i];
            pos = i;
        }
    }
    res[pos] = d;
    get(l, pos - 1, d + 1, a, res);
    get(pos + 1, r, d + 1, a, res);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), res(n);
        int mx = 0;
        for (auto &i : a) {
            cin >> i;
            mx = max(mx, i);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == mx) {
                get(0, i - 1, 1, a, res);
                get(i + 1, n - 1, 1, a, res);
                res[i] = 0;
            }
        }
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
