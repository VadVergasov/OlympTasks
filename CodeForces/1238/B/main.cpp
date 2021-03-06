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
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n;
        cin >> n;
        set<int> a, b, c, d;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            a.insert(s[0] - 'a');
            b.insert(s[1] - 'a');
            c.insert(s[2] - 'a');
            d.insert(s[3] - 'a');
        }
        cout << 4 * n - a.size() - b.size() - c.size() - d.size() << "\n";
    }
    return 0;
}