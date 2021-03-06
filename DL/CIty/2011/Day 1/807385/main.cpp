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
    int n, m, s;
    in >> n >> m >> s;
    vector<vector<char> > a(n + 3);
    char tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> tmp;
            a[i].push_back(tmp);
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.') {
                if (i + s <= n) {
                    bool r = true;
                    for (int k = 0; k < s; k++) {
                        if (a[i + k][j] == '#') {
                            r = false;
                            break;
                        }
                    }
                    if (r) {
                        res++;
                    }
                }
                if (j + s <= m) {
                    bool r = true;
                    for (int k = 0; k < s; k++) {
                        if (a[i][j + k] == '#') {
                            r = false;
                            break;
                        }
                    }
                    if (r) {
                        res++;
                    }
                }
            }
        }
    }
    out << res;
    return 0;
}
