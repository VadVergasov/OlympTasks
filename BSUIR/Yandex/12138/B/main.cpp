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
    int n;
    cin >> n;
    if (n > 8) {
        cout << 0;
        return 0;
    }
    vector<int> d(n), b;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    sort(b.begin(), b.end());
    b = d;
    int res = 0;
    do {
        do {
            vector<int> t1 = d;
            int t = n;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < t1.size(); j++) {
                    if (b[i] == t1[j] || b[i] + 1 == t1[j] ||
                        b[i] - 1 == t1[j]) {
                        t--;
                        t1.erase(t1.begin() + j);
                        break;
                    }
                }
            }
            res = max(res, t);
        } while (next_permutation(b.begin(), b.end()));
    } while (next_permutation(d.begin(), d.end()));
    cout << res;
    return 0;
}