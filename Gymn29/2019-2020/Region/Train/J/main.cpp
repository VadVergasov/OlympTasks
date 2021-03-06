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
    int k, y = 0, multi = 1;
    string s;
    in >> k;
    in.ignore();
    getline(in, s);
    vector<vector<char> > table(k, vector<char>(s.size(), 0));
    for (int i = 0; i < s.size(); i++) {
        table[y][i] = s[i];
        y += multi;
        if (y == k - 1 || y == 0) {
            multi *= -1;
        }
    }
    string res = "";
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (table[i][j] != 0) {
                res += table[i][j];
            }
        }
    }
    out << res;
    return 0;
}