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
    deque<int> a;
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        a.push_back(t);
    }
    for (int i = 0; i < m; i++) {
        int t;
        in >> t;
        a.push_front(t);
        if (a[0] == a[1]) {
            a.pop_front();
            a.pop_front();
        }
    }
    out << a.size();
    return 0;
}