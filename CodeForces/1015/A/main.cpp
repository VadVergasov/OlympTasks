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
    int n, m, tmp1, tmp2;
    cin >> n >> m;
    vector<int> a;
    a.resize(m, 0);
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        for (int j = tmp1 - 1; j < tmp2; j++) {
            a[j]++;
        }
    }
    int res = 0;
    vector<int> b;
    for (int i = 0; i < m; i++) {
        if (a[i] == 0) {
            res++;
            b.push_back(i + 1);
        }
    }
    cout << res << "\n";
    for (int i = 0; i < res; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
