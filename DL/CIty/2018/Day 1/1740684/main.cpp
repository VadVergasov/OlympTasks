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
    int n, res = 0;
    in >> n;
    vector<vector<char> > a(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> a[i][j];
        }
    }
    for (int i = 0; i < n && res == 0; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == '#') {
                int counter = 0;
                while (a[i][j + counter] == '#' && a[i + counter][j] == '#') {
                    counter++;
                }
                res = counter;
                break;
            }
        }
    }
    out << res << "\n";
    bool f = true;
    for (int i = 0; i <= n - res && f; i++) {
        for (int j = 0; j <= n - res; j++) {
            if (a[i][j] == '#') {
                out << i + 1 << " " << j + 1 << "\n";
                f = false;
                break;
            }
        }
    }
    f = true;
    for (int i = n - 1; i >= 0 && f; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if (a[i][j] == '#') {
                out << i - res + 2 << " " << j - res + 2;
                f = false;
                break;
            }
        }
    }
    return 0;
}