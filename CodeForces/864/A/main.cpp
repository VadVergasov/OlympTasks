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
// https://codeforces.com/contest/864/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    multiset<int> b;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.insert(t);
        b.insert(t);
    }
    if (a.size() != 2 || b.count(*a.begin()) != n / 2) {
        cout << "NO";
    } else {
        cout << "YES\n";
        cout << *a.begin() << " " << *(++a.begin());
    }
    return 0;
}