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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int q;
    in >> q;
    for (int i = 0; i < q; i++) {
        string s;
        in >> s;
        int res = 0;
        for (int j = 0; j < 4; j++) {
            if (s[j] == '9' || s[j] == '7' || s[j] == '6' || s[j] == '5' ||
                s[j] == '3' || s[j] == '2' || s[j] == '1') {
                res++;
            }
        }
        if (res % 2 == 1) {
            out << "Y";
        } else {
            out << "N";
        }
    }
    return 0;
}