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

int l[26];

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a.size() + b.size() != c.size()) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < a.size(); i++) {
        l[a[i] - 'A']++;
    }
    for (int i = 0; i < b.size(); i++) {
        l[b[i] - 'A']++;
    }
    for (int i = 0; i < c.size(); i++) {
        l[c[i] - 'A']--;
    }
    bool res = true;
    for (int i = 0; i < 26; i++) {
        if (l[i] < 0) {
            res = false;
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
