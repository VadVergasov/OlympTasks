// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
    short int one = 0, zero = 0;
    long long test;
    string s;
    cin >> s;
    if (s.size() < 8) {
        if (s != "1000000") {
            cout << "no";
        } else {
            cout << "yes";
        }
    } else {
        for (short int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                one++;
            }
            if (one > 0 && s[i] == '0') {
                zero++;
            }
        }
        if (one > 0 && zero > 5) {
            cout << "yes";
        } else {
            cout << "no";
        }
    }
    return 0;
}
