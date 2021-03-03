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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long res = 10e9;
        int dif[3] = {-1, 0, 1};
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                for (int z = 0; z < 3; z++) {
                    res = min(res, abs(a + dif[j] - b - dif[k]) +
                                       abs(a + dif[j] - c - dif[z]) +
                                       abs(b + dif[k] - c - dif[z]));
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}