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
// https://codeforces.com/group/kubgwEbWlB/contest/268895/problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long double a, b, c;
        cin >> a >> b >> c;
        if (c == 0) {
            cout << "0\n";
            continue;
        }
        if (b < c) {
            cout << fixed << setprecision(0) << ceil(c / b) << "\n";
        } else {
            if (a == c || b == c) {
                cout << "1\n";
            } else {
                cout << "2\n";
            }
        }
    }
    return 0;
}