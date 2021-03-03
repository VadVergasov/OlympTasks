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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long res = 0;
    int n, k, m;
    cin >> n >> k >> m;
    map<string, int> all;
    vector<string> a(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        all[a[i]] = c[i];
    }
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        vector<int> t(x);
        int mn = 1e9;
        for (int j = 0; j < x; j++) {
            cin >> t[j];
            t[j]--;
            mn = min(mn, c[t[j]]);
        }
        for (int j = 0; j < x; j++) {
            all[a[t[j]]] = mn;
        }
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        res += all[s];
    }
    cout << res;
    return 0;
}