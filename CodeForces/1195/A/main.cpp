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
    int n, k, tmp, c = 0, res = 0;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp - 1]++;
    }
    sort(a.rbegin(), a.rend());
    int i = 0;
    while (c < k && i < ceil(n / 2.0)) {
        if (a[c] > 1) {
            res += 2;
            a[c] -= 2;
            i++;
        } else {
            c++;
        }
    }
    if (i < ceil(n / 2.0)) {
        res += ceil(n / 2.0) - i;
    }
    cout << res;
    return 0;
}