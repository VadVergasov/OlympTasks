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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int r, c, h, v, count = 0;
        cin >> r >> c >> h >> v;
        vector<vector<char> > a(r, vector<char>(c));
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                cin >> a[j][k];
                if (a[j][k] == '@') {
                    count++;
                }
            }
        }
        if (count % ((h + 1) * (v + 1)) != 0) {
            cout << "Case #" << i + 1 << " IMPOSSIBLE\n";
        }
    }
    return 0;
}