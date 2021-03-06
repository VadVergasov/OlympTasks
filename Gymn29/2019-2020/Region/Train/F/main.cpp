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
    string s;
    cin >> s;
    bool four = false, nine = false, eleven = false;
    int last = s.back() - '0' + (s[s.size() - 2] - '0') * 10;
    if (last % 4 == 0) {
        four = true;
    }
    int sum = 0, fir = 0, sec = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            fir += s[i] - '0';
        } else {
            sec += s[i] - '0';
        }
        sum += s[i] - '0';
    }
    if (sum % 9 == 0) {
        nine = true;
    }
    if (abs(fir - sec) % 11 == 0) {
        eleven = true;
    }
    if (!four && !nine && !eleven) {
        cout << 1;
    } else if (four && !nine && !eleven) {
        cout << 2;
    } else if (!four && nine && !eleven) {
        cout << 3;
    } else if (!four && !nine && eleven) {
        cout << 4;
    } else if (four && nine && !eleven) {
        cout << 5;
    } else if (four && !nine && eleven) {
        cout << 6;
    } else if (!four && nine && eleven) {
        cout << 7;
    } else if (four && nine && eleven) {
        cout << 8;
    }
    return 0;
}