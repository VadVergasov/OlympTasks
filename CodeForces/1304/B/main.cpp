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
    int n, m;
    cin >> n >> m;
    map<string, int> s;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        string t1 = t;
        reverse(t1.begin(), t1.end());
        if (s.find(t1) != s.end()) {
            s[t1]++;
        } else {
            s[t]++;
        }
    }
    int cnt = 0;
    for (auto &i : s) {
        string t1 = i.first;
        reverse(t1.begin(), t1.end());
        if (t1 == i.first && cnt == 0) {
            cnt++;
            continue;
        }
        if (i.second % 2 != 0) {
            i.second--;
        }
    }
    int res = 0;
    for (auto i : s) {
        res += i.second;
    }
    vector<string> r(res);
    int i1 = 0, i2 = res - 1;
    for (auto i : s) {
        if (i.second == 0) {
            continue;
        }
        string t2 = i.first;
        reverse(t2.begin(), t2.end());
        if (t2 == i.first) {
            r[res / 2] = t2;
            continue;
        }
        r[i1] = i.first;
        string t1 = i.first;
        reverse(t1.begin(), t1.end());
        r[i2] = t1;
        i2--;
        i1++;
    }
    cout << res * m << "\n";
    for (auto i : r) {
        cout << i;
    }
    return 0;
}