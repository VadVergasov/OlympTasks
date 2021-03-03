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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, res = 0;
    in >> n;
    in.ignore();
    string s;
    for (int i = 0; i < n; i++) {
        getline(in, s);
        if (s.size() != 8) {
            res++;
            continue;
        }
        for (int j = 0; j < s.size(); j++) {
            if (!(s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z' ||
                  s[j] >= '0' && s[j] <= '9')) {
                res++;
                break;
            }
            if ((s[j] == 'O' || s[j] == '0' || s[j] == 'I' || s[j] == 'l' ||
                 s[j] == '1')) {
                res++;
                break;
            }
        }
    }
    out << n - res << " " << res;
    return 0;
}
