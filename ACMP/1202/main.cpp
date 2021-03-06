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
    int n, m;
    in >> n >> m;
    vector<vector<int> > a(n);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        in >> t1 >> t2;
        a[t1 - 1].push_back(t2 - 1);
    }
    out << n << "\n";
    for (int i = 0; i < n; i++) {
        out << a[i].size();
        if (a[i].size() != 0) {
            out << " ";
        }
        for (int j = 0; j < (int)a[i].size() - 1; j++) {
            out << a[i][j] + 1 << " ";
        }
        if (a[i].size() != 0) {
            out << a[i].back() + 1;
        }
        out << "\n";
    }
    return 0;
}