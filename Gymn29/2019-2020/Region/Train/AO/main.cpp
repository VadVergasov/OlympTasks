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
    string s;
    cin >> s;
    long long res = 0, last = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'H') {
            last = 1;
            res += 1;
        } else if (s[i] == 'C') {
            last = 12;
            res += 12;
        } else if (s[i] == 'N') {
            last = 14;
            res += 14;
        } else if (s[i] == 'O') {
            last = 16;
            res += 16;
        } else if (isdigit(s[i])) {
            res -= last;
            res += last * atoi(s.substr(i, i + 1).c_str());
        }
    }
    cout << res;
    return 0;
}