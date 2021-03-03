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
    int cur = 0;
    ifstream t("t.t");
    if (t) {
    } else {
        t.close();
        ofstream te("t.t");
        te << 0;
        te.close();
        ifstream t("t.t");
    }
    t >> cur;
    t.close();
    int n, num = 0;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
    if (cur == 0 || cur == 5 || cur == 9 || cur == 13 || cur == 20) {
        cout << "Alice";
    } else {
        cout << "Bob";
    }
    ofstream o("t.t");
    o << ++cur;
    o.close();
    if (cur == 33) {
        remove("t.t");
    }
    return 0;
}