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
    set<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        x.insert(t);
    }
    int s1 = floor((double)((*x.begin()) + (*x.rbegin())) / 2.0),
        s2 = ceil((double)((*x.begin()) + (*x.rbegin())) / 2.0);
    m--;
    if (x.find(s1) == x.end()) {
        y.push_back(s1);
    }
    if (s1 != s2 && x.find(s2) == x.end()) {
        y.push_back(s2);
    }
    int i = 0;
    while (m) {
        if (x.find(s1 - i - 1) == x.end()) {
            y.push_back(s1 - i - 1);
            m--;
        }
        if (m == 0) {
            break;
        }
        if (x.find(s2 + i + 1) == x.end()) {
            y.push_back(s2 + i + 1);
            m--;
        }
        i++;
    }
    long long res = 0;
    for (auto i : y) {
        auto i1 = lower_bound(x.begin(), x.end(), i),
             i2 = upper_bound(x.begin(), x.end(), i);
        if (i1 != x.begin()) {
            i1--;
        }
        if (i2 == x.end()) {
            i2--;
            res += abs((*i2) - i);
        } else {
            res += min(abs((*i2) - i), abs((*i1) - i));
        }
    }
    cout << res << "\n";
    for (auto i : y) {
        cout << i << " ";
    }
    return 0;
}