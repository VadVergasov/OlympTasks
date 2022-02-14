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

ofstream out("output.txt");
ifstream in("input.txt");

int main() {
    vector<int> alf(26, 0);
    string s;
    in >> s;
    for (int i = 0; i < s.size(); i++) {
        alf[s[i] - 'a']++;
    }
    int g;
    for (int i = 0; i < alf.size(); i++) {
        if (alf[i] == 0) {
            continue;
        }
        g = __gcd(g, alf[i]);
    }
    if (mn == 1) {
        sort(s.begin(), s.end());
        out << s;
        return 0;
    }
    for (int i = 0; i < alf.size(); i++) {
        if (alf[i] == 0) {
            continue;
        }
        out << (char)('a' + i);
    }
    return 0;
}
