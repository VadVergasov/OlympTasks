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
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pref(n), res(n);
        int mn = 1, mx = n;
        res.front() = mx;
        mx--;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == '>') {
                res[i] = mx;
                mx--;
            } else {
                if (i == 0) {
                    res[i] = mx - 1;
                    res[i + 1] = mx;
                    mx -= 2;
                    i++;
                    continue;
                }
                res[i] = mx;
                mx--;
                swap(res[i], res[i - 1]);
            }
        }
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}