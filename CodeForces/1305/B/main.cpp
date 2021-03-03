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
// https://codeforces.com/contest/1305/problem/B
#include <bits/stdc++.h>

using namespace std;
using std::begin;
using std::end;

int main() {
    string s;
    cin >> s;
    bool f = false, res = true;
    for (auto i : s) {
        if (i == '(') {
            f = true;
        }
        if (f && i == ')') {
            res = false;
        }
    }
    if (res) {
        cout << 0;
        return 0;
    }
    cout << "1\n";
    vector<int> del1, del2;
    int i1 = 0, i2 = s.size() - 1;
    while (i1 < i2) {
        while (i1 < s.size() && s[i1] == ')') {
            i1++;
        }
        while (i2 >= 0 && s[i2] == '(') {
            i2--;
        }
        if (i1 < s.size() && i2 >= 0 && i1 < i2) {
            del1.push_back(i1 + 1);
            del2.push_back(i2 + 1);
            i1++;
            i2--;
        }
    }
    cout << del1.size() + del2.size() << "\n";
    reverse(begin(del2), end(del2));
    for (auto i : del1) {
        cout << i << " ";
    }
    for (auto i : del2) {
        cout << i << " ";
    }
    return 0;
}