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

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string s, t;
        cin >> s >> t;
        set<char> a, b;
        vector<char> c(s.size());
        vector<char>::iterator it;
        for (int j = 0; j < s.size(); j++) {
            a.insert(s[j]);
            b.insert(t[j]);
        }
        it =
            set_intersection(a.begin(), a.end(), b.begin(), b.end(), c.begin());
        c.resize(it - c.begin());
        if (c.size() == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}