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
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    map<int, int> q;
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        q[t1] = t2;
    }
    int res = 0, na = p.back(), pos = n - 1;
    while (true) {
        auto f = q.find(p[pos - 1]);
        if (f == q.end()) {
            break;
        }
        while (f != q.end()) {
            if (f->second != na) {
                f = q.find(p[pos - 1]);
            } else {
                swap(p[pos], p[pos - 1]);
                pos--;
                break;
            }
        }
        res++;
    }
    cout << res;
    return 0;
}