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
    ifstream in("shift.in");
    ofstream out("shift.out");
    string s = "", t;
    while (in >> t) {
        s += t;
    }
    int res = 0;
    bool shift = false;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            shift = false;
        } else if (isupper(s[i])) {
            if (!shift) {
                res++;
                shift = true;
            }
        }
    }
    out << res;
    return 0;
}