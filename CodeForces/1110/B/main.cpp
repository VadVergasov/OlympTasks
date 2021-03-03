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

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b) {
    return a.first > b.first;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<pair<int, pair<int, int> > > b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        b.push_back(make_pair(a[i + 1] - a[i] + 1, make_pair(i, i + 1)));
    }
    sort(b.begin(), b.end(), cmp);
    int i = 1, res = a.back() - a.front() + 1;
    while (i < k) {
        res -= b[i - 1].first;
        res += 2;
        i++;
    }
    cout << res;
    return 0;
}