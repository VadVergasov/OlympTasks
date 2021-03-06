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
    int n, m, tmp, tmp1, tmp2, tmp3;
    in >> n >> m;
    vector<int> a, s, f, r;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < m; i++) {
        in >> tmp1 >> tmp2 >> tmp3;
        s.push_back(tmp1);
        f.push_back(tmp2);
        r.push_back(tmp3);
    }
    for (int i = 0; i < m; i++) {
        int mn = 10e9;
        for (int j = s[i] - 1; j < f[i]; j++) {
            mn = min(mn, abs(a[j] - r[i]));
        }
        int pos = 0;
        for (int j = s[i] - 1; j < f[i]; j++) {
            if (mn == abs(a[j] - r[i])) {
                pos = j + 1;
                break;
            }
        }
        out << pos << "\n";
    }
    return 0;
}
