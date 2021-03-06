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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, res = 10e9, num = 0;
    cin >> n;
    double a, b, c;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        int count = ceil(a / (c - b));
        cout << count << endl;
        if (res == count) {
            continue;
        }
        res = min(count, res);
        if (res == count) {
            num = i + 1;
        }
    }
    cout << num;
    return 0;
}