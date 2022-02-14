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
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, res = 0;
    in >> n;
    vector<string> s, r;
    s.resize(n);
    for (int i = 0; i < n; i++) {
        in >> s[i];
    }
    for (int i = 0; i < n; i++) {
        bool a = true;
        string t = "";
        for (int j = s[i].size() - 1; j >= 0; j--) {
            if (s[i][j] == 'H') {
                t += 'H';
            } else if (s[i][j] == 'I') {
                t += 'I';
            } else if (s[i][j] == 'N') {
                t += 'N';
            } else if (s[i][j] == 'O') {
                t += 'O';
            } else if (s[i][j] == 'S') {
                t += 'S';
            } else if (s[i][j] == 'X') {
                t += 'X';
            } else if (s[i][j] == 'Z') {
                t += 'Z';
            } else if (s[i][j] == '0') {
                t += '0';
            } else if (s[i][j] == 'M') {
                t += 'W';
            } else if (s[i][j] == '6') {
                t += '9';
            } else if (s[i][j] == 'W') {
                t += 'M';
            } else if (s[i][j] == '9') {
                t += '6';
            } else {
                a = false;
                break;
            }
        }
        if (a) {
            r.push_back(t);
            res++;
        }
    }
    out << res << "\n";
    for (int i = 0; i < res; i++) {
        out << r[i] << "\n";
    }
    return 0;
}
