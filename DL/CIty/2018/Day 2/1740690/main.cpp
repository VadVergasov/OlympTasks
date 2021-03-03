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
    long long n, k, c = 0, z = 0, o = 0;
    in >> n >> k;
    char t;
    vector<char> a;
    for (int i = 0; i < n; i++) {
        in >> t;
        a.push_back(t);
        if (t == '(') {
            c++;
        } else if (t == '1') {
            o += pow(pow(2, k), 2) / pow(4, c);
        } else if (t == '0') {
            z += pow(pow(2, k), 2) / pow(4, c);
        } else if (t == ')') {
            c--;
        }
    }
    out << z << " " << o;
    return 0;
}
