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

using namespace std;

int main() {
    long long x;
    int n, m, tmp;
    cin >> n >> m;
    vector<int> a, b;
    vector<vector<int> > c;
    c.resize(m, {});
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        c[i].resize(n, 0);
        b.push_back(tmp);
    }
    cin >> x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[j][i] = a[i] * b[j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << c[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
