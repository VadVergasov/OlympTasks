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
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool res = true;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        int tmp = 0;
        for (int j = 0; j < min(t.size(), s.size()); j++) {
            char a = tolower(t[j]), b = tolower(s[j]);
            if ((a == b) || (a == '0' && b == 'o') || (a == 'o' && b == '0') ||
                (a == '1' && b == 'l') || (a == 'l' && b == '1') ||
                (a == '1' && b == 'i') || (a == 'i' && b == '1') ||
                (a == 'l' && b == 'i') || (a == 'i' && b == 'l')) {
                tmp++;
            }
        }
        if (tmp == t.size()) {
            res = false;
            break;
        }
    }
    if (res) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}