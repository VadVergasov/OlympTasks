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
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        string s, res = "";
        cin >> s;
        int balance = 0;
        for (int i = 0; i < s.size(); i++) {
            while (balance < s[i] - '0') {
                res += "(";
                balance++;
            }
            while (s[i] == s[i + 1]) {
                res += s[i];
                i++;
            }
            res += s[i];
            if (i != s.size() - 1) {
                while (balance > s[i + 1] - '0') {
                    res += ")";
                    balance--;
                }
            } else {
                for (int j = 0; j < s[i] - '0'; j++) {
                    res += ")";
                }
            }
        }
        cout << "Case #" << cur << ": " << res << "\n";
    }
    return 0;
}