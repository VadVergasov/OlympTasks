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
    string s;
    cin >> s;
    int cur = 0, mn = 1e9;
    vector<int> a;
    for (int i = 0; i < n - 1; i++) {
        mn = min(mn, cur);
        a.push_back(cur);
        if (s[i] == '<') {
            cur++;
        } else {
            cur--;
        }
    }
    a.push_back(cur);
    cur = 1;
    vector<int> res(n, 0);
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            for (int j = i; res[j] == 0; j--) {
                res[j] = cur;
                cur++;
            }
        }
    }
    for (int j = n - 1; res[j] == 0; j--) {
        res[j] = cur;
        cur++;
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}
