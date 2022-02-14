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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    for (int i = 0; i < n; i++) {
        b[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = max(res, b[i]);
    }
    out << res;
    return 0;
}