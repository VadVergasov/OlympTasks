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
// https://codeforces.com/contest/1301/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    for (int q = 0; q < n; q++) {
        string a, b, c;
        cin >> a >> b >> c;
        bool res = true;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i] && a[i] != c[i] ||
                a[i] != b[i] && (a[i] != c[i] && b[i] != c[i])) {
                res = false;
                cout << "NO\n";
                break;
            }
        }
        if (!res) {
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}