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
    int n;
    in >> n;
    string s1, s2;
    in >> s1 >> s2;
    int l = 0, r = n - 1;
    while (s1[l] == s2[l]) {
        l++;
    }
    while (s1[r] == s2[r]) {
        r--;
    }
    if (l > r) {
        out << "Yes\n1 1";
        return 0;
    }
    string t = s2.substr(l, r - l + 1);
    reverse(t.begin(), t.end());
    if (t == s1.substr(l, r - l + 1)) {
        out << "Yes\n" << l + 1 << " " << r + 1;
    } else {
        out << "No";
    }
    return 0;
}