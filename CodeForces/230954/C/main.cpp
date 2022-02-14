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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    long long res = 0;
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++) {
        long long sum = c[i];
        for (int j = n - 1; j > i; j--) {
            if (c[j] - c[i] >= x) {
                sum += c[j];
                cout << c[i] << " " << c[j] << " " << sum << endl;
                if (sum >= l && sum <= r) {
                    res++;
                }
            }
        }
    }
    cout << res;
    return 0;
}