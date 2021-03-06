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
    int n, m, del, res = 0;
    cin >> n >> m;
    if (m % n != 0) {
        cout << -1;
        return 0;
    }
    del = m / n;
    while (del > 1) {
        if (del % 3 == 0) {
            del /= 3;
        } else if (del % 2 == 0) {
            del /= 2;
        } else {
            cout << -1;
            return 0;
        }
        res++;
    }
    cout << res;
    return 0;
}