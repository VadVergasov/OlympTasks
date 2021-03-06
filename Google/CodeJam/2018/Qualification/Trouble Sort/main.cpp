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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a, b;
        for (int j = 0; j < n; j++) {
            int t;
            cin >> t;
            if (j % 2 == 0) {
                a.push_back(t);
            } else {
                b.push_back(t);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << "Case #" << i + 1 << ": ";
        bool res = true;
        for (int j = 0; j < n - 1; j++) {
            if (j % 2 == 0) {
                if (a[j / 2] > b[j / 2]) {
                    res = false;
                    cout << j << "\n";
                    break;
                }
            } else {
                if (b[j / 2] > a[j / 2 + 1]) {
                    res = false;
                    cout << j << "\n";
                    break;
                }
            }
        }
        if (res) {
            cout << "OK\n";
        }
    }
    return 0;
}