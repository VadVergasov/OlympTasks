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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int p, q;
        cin >> p >> q;
        q++;
        vector<vector<int> > field(q, vector<int>(q, 0));
        for (int j = 0; j < p; j++) {
            int x, y;
            char d;
            cin >> x >> y >> d;
            if (d == 'W') {
                for (int k = 0; k < x; k++) {
                    for (int z = 0; z < q; z++) {
                        field[z][k]++;
                    }
                }
            } else if (d == 'E') {
                for (int k = x + 1; k < q; k++) {
                    for (int z = 0; z < q; z++) {
                        field[z][k]++;
                    }
                }
            } else if (d == 'S') {
                for (int k = 0; k < q; k++) {
                    for (int z = 0; z < y; z++) {
                        field[z][k]++;
                    }
                }
            } else {
                for (int k = 0; k < q; k++) {
                    for (int z = y + 1; z < q; z++) {
                        field[z][k]++;
                    }
                }
            }
        }
        int mx = 0;
        for (int k = 0; k < q; k++) {
            for (int z = 0; z < q; z++) {
                mx = max(mx, field[k][z]);
            }
        }
        bool f = true;
        for (int k = 0; k < q && f; k++) {
            for (int z = 0; z < q && f; z++) {
                if (mx == field[k][z]) {
                    cout << "Case #" << i + 1 << ": " << z << " " << k << "\n";
                    f = false;
                }
            }
        }
    }
    return 0;
}