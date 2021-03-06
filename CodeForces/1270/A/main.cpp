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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        bool res = false;
        vector<int> f(k1), s(k2);
        for (int j = 0; j < k1; j++) {
            cin >> f[j];
            if (f[j] == n) {
                res = true;
            }
        }
        for (int j = 0; j < k2; j++) {
            cin >> s[j];
        }
        if (res) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}