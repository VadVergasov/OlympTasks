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
    int n;
    cin >> n;
    string tmp;
    vector<string> s;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.push_back(tmp);
    }
    bool res = false;
    for (int i = 0; i < n; i++) {
        if (s[i][0] == 'O' && s[i][1] == 'O') {
            s[i][0] = '+';
            s[i][1] = '+';
            res = true;
            break;
        } else if (s[i][3] == 'O' && s[i][4] == 'O') {
            res = true;
            s[i][3] = '+';
            s[i][4] = '+';
            break;
        }
    }
    if (!res) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        cout << s[i] << "\n";
    }
    return 0;
}
