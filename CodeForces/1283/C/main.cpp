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

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> f(n), d(n, 0), o;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
        if (f[i] != 0) {
            d[f[i] - 1] = 1;
        } else {
            o.push_back(i);
        }
    }
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) {
            if (o[pos] == i) {
                if (pos == o.size() - 1) {
                    f[o[pos]] = i + 1;
                    swap(f[o[pos - 1]], f[o[pos]]);
                    continue;
                }
                swap(o[pos + 1], o[pos]);
                f[o[pos]] = i + 1;
            } else {
                f[o[pos]] = i + 1;
            }
            pos++;
        }
    }
    for (auto i : f) {
        cout << i << " ";
    }
    return 0;
}