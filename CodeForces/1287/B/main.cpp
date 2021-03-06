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
    int n, k;
    cin >> n >> k;
    vector<string> a(n);
    set<string> b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.insert(a[i]);
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string t = "";
            for (int z = 0; z < k; z++) {
                if (a[i][z] == a[j][z]) {
                    t += a[i][z];
                } else {
                    if (a[i][z] == 'S' && a[j][z] == 'T' ||
                        a[i][z] == 'T' && a[j][z] == 'S') {
                        t += 'E';
                    } else if (a[i][z] == 'S' && a[j][z] == 'E' ||
                               a[i][z] == 'E' && a[j][z] == 'S') {
                        t += 'T';
                    } else {
                        t += 'S';
                    }
                }
            }
            if (b.find(t) != b.end()) {
                res++;
            }
        }
    }
    cout << res / 3;
    return 0;
}