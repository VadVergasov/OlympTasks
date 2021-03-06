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
    int n;
    char tmp;
    in >> n;
    vector<char> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    if (n == 1) {
        cout << 0;
        return 0;
    }
    int ot[] = {0, 0};
    ot[a[0] - '0']++;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            ot[a[i + 1] - '0']++;
        }
    }
    out << min(ot[0], ot[1]);
    return 0;
}
