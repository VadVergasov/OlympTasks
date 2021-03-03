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
    ofstream out("output.txt");
    ifstream in("input.txt");
    int k, num = 0, res = 0;
    in >> k;
    string s;
    in.ignore();
    getline(in, s);
    vector<int> a;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',') {
            a.push_back(num);
            num = 0;
        } else {
            num++;
        }
    }
    if (s.back() != ',') {
        a.push_back(num);
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == k) {
            res++;
        }
    }
    out << res;
    return 0;
}
