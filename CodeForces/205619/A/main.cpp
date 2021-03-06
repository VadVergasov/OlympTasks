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
    vector<int> a;
    int t;
    in >> t;
    while (t != 0) {
        a.push_back(t);
        in >> t;
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            for (int k = j + 1; k < a.size(); k++) {
                if (a[i] + a[j] > a[k] && a[i] + a[k] > a[j] &&
                    a[j] + a[k] > a[i]) {
                    out << "YES\n" << a[i] << " " << a[j] << " " << a[k];
                    return 0;
                }
            }
        }
    }
    out << "NO";
    return 0;
}