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
    int q;
    cin >> q;
    for (int k = 0; k < q; k++) {
        string s;
        cin >> s;
        int l = 0, r = 0, u = 0, d = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                l++;
            } else if (s[i] == 'R') {
                r++;
            } else if (s[i] == 'U') {
                u++;
            } else {
                d++;
            }
        }
        if (min(l, r) == 0 && min(u, d) == 0) {
            cout << 0 << "\n";
            continue;
        }
        if (min(l, r) == 0) {
            cout << "2\nUD\n";
            continue;
        }
        if (min(u, d) == 0) {
            cout << "2\nLR\n";
            continue;
        }
        cout << min(l, r) * 2 + min(u, d) * 2 << "\n";
        for (int i = 0; i < min(l, r); i++) {
            cout << "L";
        }
        for (int i = 0; i < min(u, d); i++) {
            cout << "U";
        }
        for (int i = 0; i < min(l, r); i++) {
            cout << "R";
        }
        for (int i = 0; i < min(u, d); i++) {
            cout << "D";
        }
        cout << "\n";
    }
    return 0;
}