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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || b + c == a || a + c == b) {
        cout << 0;
    } else {
        if ((a + b + c) % 2 == 1) {
            cout << -1;
        } else {
            int sum = a + b + c;
            vector<int> v = {a, b, c};
            sort(begin(v), end(v));
            if (a == v[2]) {
                cout << 1;
            } else if (b == v[2]) {
                cout << 2;
            } else {
                cout << 3;
            }
            cout << "\n" << (sum / 2) - v[0] << " " << (sum / 2) - v[1];
        }
    }
    return 0;
}