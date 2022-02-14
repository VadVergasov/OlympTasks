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
    int n;
    cin >> n;
    pair<string, string> a, b;
    for (int i = 0; i < n; i++) {
        char t;
        cin >> t;
        if (i % 2 == 0) {
            a.first += t;
        } else {
            a.second += t;
        }
    }
    for (int i = 0; i < n; i++) {
        char t;
        cin >> t;
        if (i % 2 == 0) {
            b.first += t;
        } else {
            b.second += t;
        }
    }
    sort(a.first.begin(), a.first.end());
    sort(a.second.begin(), a.second.end());
    sort(b.first.begin(), b.first.end());
    sort(b.second.begin(), b.second.end());
    if (a.first == b.first && a.second == b.second) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
