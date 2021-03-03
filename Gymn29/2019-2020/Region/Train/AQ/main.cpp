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
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    int i = 0, f, s;
    string t;
    while (isdigit(s1[i])) {
        t += s1[i];
        i++;
    }
    f = atoi(t.c_str());
    i = 0;
    t = "";
    while (isdigit(s2[i])) {
        t += s2[i];
        i++;
    }
    s = atoi(t.c_str());
    if (s1.find("BC") != -1 && s2.find("BC") == -1) {
        res = s + f - 1;
    } else if (s2.find("BC") != -1 && s1.find("BC") == -1) {
        res = -(s + f - 1);
    } else if (s2.find("BC") != -1 && s1.find("BC") != -1) {
        res = f - s;
    } else {
        res = s - f;
    }
    cout << res;
    return 0;
}