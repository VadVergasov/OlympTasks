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

#include <ext/pb_ds/assoc_container.hpp>

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("tune=native")

using namespace std;
using namespace __gnu_pbds;

template <typename T1, typename T2>
using hash_map = gp_hash_table<T1, T2>;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        hash_map<int, int> mp;
        vector<int> res(m);
        vector<vector<int>> a(m);
        for (int i = 0; i < m; i++) {
            int k;
            cin >> k;
            a[i].resize(k);
            for (auto &j : a[i]) {
                cin >> j;
            }
            if (k == 1) {
                res[i] = a[i][0];
                mp[a[i][0]]++;
            }
        }
        bool flag = true;
        for (auto [f, s] : mp) {
            if (s > ceil(m / 2.0)) {
                flag = false;
                break;
            }
        }
        for (int i = 0; i < m; i++) {
            if (res[i] == 0) {
                for (auto j : a[i]) {
                    if (mp[j] != ceil(m / 2.0)) {
                        res[i] = j;
                        mp[j]++;
                        break;
                    }
                }
            }
        }
        if (flag) {
            cout << "YES\n";
            for (auto i : res) {
                cout << i << " ";
            }
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
