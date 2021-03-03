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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    unordered_map<long long, int> dif;
    for (int i = 0; i < n; i++) {
        dif[abs(a[i] - b[i])]++;
    }
    int x, count = 0;
    for (auto i : dif) {
        count = max(count, i.second);
        if (count == i.second) {
            x = i.first;
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] += x;
    }
    multiset<long long> r;
    for (int i = 0; i < n; i++) {
        r.insert(abs(a[i] - b[i]));
    }
    r.erase(next(r.begin(), n - k), r.end());
    long long res = 0;
    for (auto i : r) {
        res += i;
    }
    cout << res;
    return 0;
}