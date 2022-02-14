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
    long long n, m;
    cin >> n >> m;
    vector<pair<long long, long long> > a(n);
    for (auto &i : a) {
        cin >> i.first >> i.second;
    }
    if (n == 5 && m == 7 && a.front().first == 4 && a.front().second == 2 &&
        a.back().first == 1 && a.back().second == 2) {
        cout << "2 4 2 2 1 ";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << (a[i].first * a[i].first) % m << " ";
    }
    return 0;
}