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
// https://codeforces.com/contest/1328/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string c;
        cin >> c;
        bool f = false;
        string a = "1", b = "1";
        for (int i = 1; i < n; i++) {
            if (c[i] == '0') {
                a += "0";
                b += "0";
            } else if (c[i] == '1') {
                if (!f) {
                    a += "1";
                    b += "0";
                    f = true;
                } else {
                    a += "0";
                    b += "1";
                }
            } else if (c[i] == '2') {
                if (!f) {
                    a += "1";
                    b += "1";
                } else {
                    a += "0";
                    b += "2";
                }
            }
        }
        cout << a << "\n" << b << "\n";
    }
    return 0;
}