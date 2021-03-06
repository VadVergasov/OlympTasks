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
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, cur = 0, dir = 1;
    in >> n;
    in.ignore();
    string s;
    getline(in, s);
    vector<vector<char> > a(n, vector<char>(s.size(), 30));
    for (int i = 0; i < s.size(); i++) {
        a[cur][i] = s[i];
        cur += dir;
        if (cur == n - 1 || cur == 0) {
            dir *= -1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (a[i][j] != 30) {
                out << a[i][j];
            }
        }
    }
    return 0;
}
