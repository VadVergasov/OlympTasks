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
int c[256];

int main() {
    c['a'] = 1;
    c['e'] = 1;
    c['i'] = 1;
    c['o'] = 1;
    c['u'] = 1;
    c['y'] = 1;
    string s;
    getline(cin, s, '\n');
    int n = (int)s.size();
    int a1 = 0, a2 = 0;
    vector<int> vr;
    int f = 0;
    for (int i = 0; i < n; ++i) {
        if (c[tolower(s[i])]) {
            ++f;
        } else if (f) {
            vr.push_back(f);
            f = 0;
        }
    }
    if (f) {
        vr.push_back(f);
    }
    for (auto i : vr) {
        if (i == 2) ++a1;
        if (i == 3) ++a2;
    }

    cout << a1 << " " << a2 << '\n';
    return 0;
}