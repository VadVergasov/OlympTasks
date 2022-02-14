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
    ifstream in("herding.in");
    ofstream out("herding.out");
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    int mn = 1e9;
    sort(a.begin(), a.end());
    for (auto i : a) {
        auto j = upper_bound(a.begin(), a.end(), n + i - 2);
        if (j == a.end()) {
            continue;
        }
        mn = min(mn, abs(i - *j) - 1 + (abs(i - *j) - 1 != n - 2));
    }
    out << mn << "\n";
    deque<int> otr;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] - 1 < 1) {
            continue;
        }
        otr.push_back(a[i + 1] - a[i] - 1);
        sum += otr.back();
    }
    int res = sum - min(otr.back(), otr.front());
    out << res;
    return 0;
}