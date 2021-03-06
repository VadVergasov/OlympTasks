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
    long long n, t;
    cin >> n;
    bool t1 = false, t2 = false, t3 = false;
    for (long long i = 0; i < n; i++) {
        cin >> t;
        if (t == 1021) {
            t1 = true;
        } else if (t == 1031) {
            t2 = true;
        } else if (t == 1033) {
            t3 = true;
        } else if (t == 1052651) {
            t1 = true;
            t2 = true;
        } else if (t == 1054693) {
            t1 = true;
            t3 = true;
        } else if (t == 1065023) {
            t2 = true;
            t3 = true;
        } else if (t == 1087388483) {
            cout << "YES";
            return 0;
        }
    }
    if (t1 && t2 && t3) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}