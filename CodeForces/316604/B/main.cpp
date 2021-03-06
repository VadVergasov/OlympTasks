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
    long long x, k, x1;
    cin >> x >> k;
    x1 = x;
    multiset<long long> n;
    set<long long> u;
    while (x1) {
        n.insert(x1 % 10);
        u.insert(x1 % 10);
        x1 /= 10;
    }
    if (k == 1) {
        if ((u.size() == 2 && (n.count(*u.begin()) == 1 ||
                               n.count(*u.begin()) == n.size() - 1)) ||
            u.size() == 1) {
            cout << x;
        } else {
            long long res = 1e18;
            for (int i = 1; i < 10; i++) {
                long long cur = 0;
                for (int j = 0; j < (int)(to_string(x).size()) - 1; j++) {
                    cur *= 10;
                    cur += i;
                }
                for (int j = 0; j < 10; j++) {
                    string s = to_string(cur);
                    for (int k = 0; k <= (int)s.size(); k++) {
                        string s = to_string(cur);
                        s.insert(s.begin() + k, ('0' + j));
                        if (_atoi64(s.c_str()) >= x) {
                            res = min(res, _atoi64(s.c_str()));
                        }
                    }
                }
            }
            cout << res;
        }
    } else {
        if (u.size() == 1) {
            cout << x;
        } else {
            long long res = 1e18;
            for (int i = 1; i < 10; i++) {
                long long cur = 0;
                for (int j = 0; j < (int)to_string(x).size(); j++) {
                    cur *= 10;
                    cur += i;
                }
                if (cur >= x) {
                    res = min(res, cur);
                }
            }
            cout << res;
        }
    }
    return 0;
}
