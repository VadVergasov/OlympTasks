"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.first < b.first; }

int main() {
    int s, n, tmp1, tmp2;
    cin >> s >> n;
    vector<pair<int, int> > a;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        a.push_back(make_pair(tmp1, tmp2));
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (s > a[i].first) {
            s += a[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
