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
    set<int> a, b;
    for (int i = 0; i < 11; i++) {
        int t;
        in >> t;
        a.insert(t);
    }
    for (int i = 0; i < 11; i++) {
        int t;
        in >> t;
        b.insert(t);
    }
    int n, res = 1;
    pair<int, int> mn = make_pair(0, 0);
    in >> n;
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        if (a.find(t) != a.end() && b.find(t) != b.end()) {
            res++;
        } else if (a.find(t) != a.end()) {
            mn.first++;
        } else {
            mn.second++;
        }
    }
    out << res << "\n";
    for (int i = 0; i < res; i++) {
        out << mn.first + i << ":" << mn.second + res - i - 1 << "\n";
    }
    return 0;
}