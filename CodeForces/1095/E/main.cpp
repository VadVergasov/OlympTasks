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
    int n, cur = 0, mn = 0, res = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            cur++;
        } else {
            cur--;
        }
        mn = min(mn, cur);
    }
    if (cur == 2 && mn == 0) {
        cur = 0;
        mn = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ')') {
                cur++;
            } else {
                cur--;
                res++;
            }
            mn = min(mn, cur);
            if (mn < 0) {
                break;
            }
        }
    } else if (cur == -2 && mn > -3) {
        cur = 0;
        mn = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cur++;
            } else {
                cur--;
                res++;
            }
            mn = min(mn, cur);
            if (mn < 0) {
                break;
            }
        }
    }
    cout << res;
    return 0;
}
