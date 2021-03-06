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
// https://codeforces.com/contest/1304/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int q1 = 0; q1 < q; q1++) {
        int n, m;
        cin >> n >> m;
        int dir = 0;
        vector<pair<int, pair<int, int> > > a(n);
        for (auto &i : a) {
            cin >> i.first >> i.second.first >> i.second.second;
        }
        bool f = true;
        int rest = 0, last = 0;
        for (auto i : a) {
            if (m + (i.first - last) >= i.second.first &&
                m <= i.second.second) {
                if (dir == -1) {
                    rest = 0;
                }
                rest += min(m + (i.first - last) - i.second.first,
                            i.second.second - m);
                m = i.second.first;
                dir = 1;
            } else if (m - (i.first - last) <= i.second.second &&
                       m >= i.second.first) {
                if (dir == 1) {
                    rest = 0;
                }
                rest += min(abs((i.first - last) - (m - i.second.second)),
                            abs(m - i.second.first));
                m = i.second.second;
                dir = -1;
            } else if (m + (i.first - last) < i.second.second &&
                       m + (i.first - last) + rest >= i.second.first &&
                       dir == 1) {
                rest -= i.second.first - (m + (i.first - last));
                m = i.second.first;
                dir = 1;
            } else if (m - (i.first - last) - rest <= i.second.second &&
                       m - (i.first - last) > i.second.second && dir == -1) {
                rest -= (m - (i.first - last)) - i.second.second;
                m = i.second.second;
                dir = -1;
            } else {
                f = false;
                cout << "NO\n";
                break;
            }
            cout << m << "\n";
            last = i.first;
        }
        if (!f) {
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}