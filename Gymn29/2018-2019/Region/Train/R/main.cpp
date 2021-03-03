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
    int n;
    in >> n;
    vector<vector<char> > t(9, vector<char>(9));
    vector<vector<vector<char> > > a(n,
                                     vector<vector<char> >(9, vector<char>(9)));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            in >> t[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                in >> a[i][j][k];
            }
        }
    }
    for (int k = 0; k < n; k++) {
        bool res = true;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (t[i][j] == '*' || t[i][j] == a[k][i][j]) {
                    continue;
                } else {
                    out << "N";
                    res = false;
                    break;
                }
            }
            if (!res) {
                break;
            }
        }
        if (!res) {
            continue;
        }
        for (int i = 0; i < 9; i++) {
            set<short> v, g;
            for (int j = 0; j < 9; j++) {
                if ((v.find(a[k][i][j]) != v.end()) ||
                    (g.find(a[k][j][i]) != g.end())) {
                    out << "N";
                    res = false;
                    break;
                }
                v.insert(a[k][i][j]);
                g.insert(a[k][j][i]);
            }
            if (!res) {
                break;
            }
        }
        if (!res) {
            continue;
        }
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                set<int> s;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (s.find(a[k][x * 3 + i][y * 3 + j]) != s.end()) {
                            out << "N";
                            res = false;
                            break;
                        }
                    }
                    if (!res) {
                        break;
                    }
                }
                if (!res) {
                    break;
                }
            }
            if (!res) {
                break;
            }
        }
        if (!res) {
            continue;
        }
        out << "Y";
    }
    return 0;
}
