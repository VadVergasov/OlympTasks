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
    int n, k;
    cin >> n;
    cout << "? 1 " << n << endl;
    cin >> k;
    vector<int> res;
    res.push_back(1);
    for (int i = 1; i < n; i++) {
        int t;
        cout << "? " << i << " " << i + 1 << endl;
        cin >> t;
        if (t == 1) {
            if (res.back() == 1) {
                res.push_back(1);
            } else {
                res.push_back(2);
            }
        } else {
            if (res.back() == 1) {
                res.push_back(2);
            } else {
                res.push_back(1);
            }
        }
    }
    for (int i = 2; i < n - 1; i++) {
        for (int j = 1; j + i - 1 < n; j++) {
            cout << "? " << j << " " << j + i << endl;
            int t;
            cin >> t;
            int un = 0, mx = 0;
            set<int> num;
            for (int k = j - 1; k < j + i; k++) {
                num.insert(res[k]);
                mx = max(mx, res[k]);
            }
            if (num.size() < t) {
                res[j + i - 1] = mx + 1;
            } else if (num.size() > t) {
                res[j + i - 1] = res[j + i - t];
            }
        }
    }
    cout << "Ready!\n" << k << "\n";
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}