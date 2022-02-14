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
    int n, tmp, res = 0;
    in >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < floor(n / 2.0) + 1; i++) {
        res += floor(a[i] / 2.0) + 1;
    }
    out << res;
    return 0;
}
