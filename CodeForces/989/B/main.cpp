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
    int n, p;
    cin >> n >> p;
    string s, r;
    cin >> s;
    r = s;
    for (auto &i : r) {
        if (i == '.') {
            i = '0';
        }
    }
    bool res = true;
    for (int i = p; i < n; i++) {
        if (r[i] != r[i - p]) {
            res = false;
        }
    }
    if (!res) {
        cout << r;
        return 0;
    }
    int i = 0;
    while (i < n && s[i] != '.') {
        i++;
    }
    if (i + p < n) {
        r[i] = '1';
        cout << r;
        return 0;
    }
    i = n - 1;
    while (i >= 0 && s[i] != '.') {
        i--;
    }
    if (i - p >= 0) {
        r[i] = '1';
        cout << r;
        return 0;
    }
    cout << r;
    return 0;
}