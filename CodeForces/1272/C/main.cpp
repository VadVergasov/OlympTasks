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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> c;
    for (int i = 0; i < k; i++) {
        char t;
        cin >> t;
        c.insert(t);
    }
    long long l = 0, pos = 0, res = 0;
    while (pos < s.size()) {
        if (c.find(s[pos]) != c.end()) {
            l++;
        } else {
            res += l * (l + 1) / 2;
            l = 0;
        }
        pos++;
    }
    res += l * (l + 1) / 2;
    cout << res;
    return 0;
}