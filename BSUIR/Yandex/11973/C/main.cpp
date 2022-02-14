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
    int n, k;
    cin >> n >> k;
    vector<int> w(n), res;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    int mn = 10e8;
    for (int j = 0; j <= n - k; j++) {
        int mx = 0;
        res.clear();
        for (int i = 0; i < k; i++) {
            if (i % 2 == 0) {
                res.push_back(w[j + i]);
            } else {
                res.push_back(w[n - k + j - i]);
            }
        }
        for (int i = 1; i < res.size(); i++) {
            mx = max(mx, res[i] + res[i - 1]);
        }
        mx = max(mx, res.front() + res.back());
        mn = min(mn, mx);
    }
    cout << mn;
    return 0;
}