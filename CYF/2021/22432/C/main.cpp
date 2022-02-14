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
    long long n, x, cnt = 0;
    long long sum = 0;
    cin >> n >> x;
    vector<long long> res(n);
    for (int i = 0; i < n; i++) {
        if (x > 0) {
            res[i] = x;
            sum += x;
            x--;
        } else {
            cnt++;
            res[i] = 1;
        }
    }
    if (cnt % 2 == 1) {
        sum--;
    }
    cout << sum << "\n";
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}