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
    int n, m;
    in >> n >> m;
    vector<vector<char> > a(n);
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
                for (int k = i + 1; k < n; k++) {
                    if (a[k][j] == '.') {
                        res++;
                    } else {
                        break;
                    }
                }
                for (int k = j + 1; k < m; k++) {
                    if (a[i][k] == '.') {
                        res++;
                    } else {
                        break;
                    }
                }
            }
        }
    }
    out << res;
    return 0;
}
