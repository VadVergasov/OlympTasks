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
        int n;
        bool cur = false, f = true;
        cin >> n;
        vector<string> s(2);
        cin >> s[0] >> s[1];
        for (int j = 0; j < n; j++) {
            if (s[cur][j] == '1' || s[cur][j] == '2') {
                continue;
            } else if (((s[cur][j] == '3' || s[cur][j] == '4' ||
                         s[cur][j] == '5' || s[cur][j] == '6') &&
                        (s[!cur][j] == '3' || s[!cur][j] == '4' ||
                         s[!cur][j] == '5' || s[!cur][j] == '6'))) {
                cur = !cur;
                continue;
            } else {
                cout << "NO\n";
                f = false;
                break;
            }
        }
        if (!cur && f) {
            cout << "NO\n";
            continue;
        }
        if (f) {
            cout << "YES\n";
        }
    }
    return 0;
}