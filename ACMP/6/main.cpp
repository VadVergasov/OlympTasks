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
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    in >> s;
    if (s.size() != 5 || !isalpha(s[0]) || !isdigit(s[1]) || s[2] != '-' ||
        !isalpha(s[3]) || !isdigit(s[4])) {
        out << "ERROR";
        return 0;
    }
    int x = abs(s[0] - s[3]), y = abs(s[1] - s[4]);
    if (x == 2 && y == 1 || x == 1 && y == 2) {
        out << "YES";
    } else {
        out << "NO";
    }
    return 0;
}
