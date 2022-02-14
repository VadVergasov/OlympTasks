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
    int n, tmp;
    cin >> n;
    vector<long long> a, b;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if (n > 5) {
        for (int i = 0; i < 3; i++) {
            b.push_back(a[i]);
            b.push_back(a[a.size() - 1 - i]);
        }
    } else {
        b = a;
    }
    long long mx = -10e12, res;
    do {
        mx = max((long long)(abs(b[0] * b[1] * b[2])), mx);
    } while (next_permutation(b.begin(), b.end()));
    do {
        if (mx == abs(b[0] * b[1] * b[2])) {
            res = b[0] * b[1] * b[2];
            break;
        }
    } while (next_permutation(b.begin(), b.end()));
    cout << res;
    return 0;
}
