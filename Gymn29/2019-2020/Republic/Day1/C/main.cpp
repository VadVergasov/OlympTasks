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
    int n, k, lowest = 0, middle = 2, biggest = n + 1;
    cin >> n >> k;
    vector<int> res(n);
    res[0] = 1;
    res[n - 1] = n;
    for (int i = 1; i < n - 1; i++) {
        cout << "1 " << n << " " << i + 1 << endl;
        int r;
        cin >> r;
        if (r == 1) {
            res[i] = lowest;
            lowest--;
        } else if (r == n) {
            res[i] = biggest;
            biggest++;
        } else {
            res[i] = middle;
            middle++;
        }
    }
    return 0;
}