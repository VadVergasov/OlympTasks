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
    int n, t;
    in >> n >> t;
    int hours, minutes, sec;
    char a, b;
    multiset<int> c;
    for (int i = 0; i < 2 * n; i++) {
        in >> hours >> a >> minutes >> b >> sec;
        c.insert(hours * 3600 + minutes * 60 + sec);
    }
    for (int i = 0; i < n; i++) {
        cout << c[2 * i - 1] / 3600 << ":" <<
    }
    return 0;
}
