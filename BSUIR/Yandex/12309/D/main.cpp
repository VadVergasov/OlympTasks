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
    ifstream in("mountain.in");
    int n, q;
    in >> n >> q;
    vector<pair<long long, long long> > a(n);
    map<long long, long long> coord;
    coord[0] = 0;
    for (int i = 0; i < n; i++) {
        auto last = (*coord.rbegin());
        int t1, t2;
        in >> t1 >> t2;
        coord[last.first + t1] = last.second + t1 * t2;
        a[i] = make_pair(t1, t2);
    }
    for (int i = 0; i < q; i++) {
        int t1, t2, x1, x2;
        in >> t1 >> t2;
        coord[t1] = t2;
        auto cur = coord.find(t1);
        auto cur1 = cur;
        cur--;
        cur1++;
        x1 = cur->first;
        x2 = cur1->first;
        while (cur->second < t2 && x1 > 0) {
            x1 = cur->first;
            cur--;
        }
        while (cur1->second < t2 && cur1 != coord.end()) {
            x2 = cur1->first;
            cur1++;
        }
        cout << x1 << " " << x2 << "\n";
    }
    return 0;
}