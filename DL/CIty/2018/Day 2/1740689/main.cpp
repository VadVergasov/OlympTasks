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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<vector<int> > a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> a[i][j];
        }
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = n - 1; j > 0; j--) {
            if (a[i][j] <= a[i - 1][j] && a[i][j] <= a[i][j - 1]) {
                out << i << " " << i + 1 << "\n" << j << " " << j + 1;
                return 0;
            } else if (a[i][j] <= a[i - 1][j]) {
                out << i << " " << i + 1 << "\n"
                    << "-1 -1";
                return 0;
            } else if (a[i][j] <= a[i][j - 1]) {
                out << "-1 -1\n" << j << " " << j + 1;
                return 0;
            }
        }
    }
    return 0;
}
