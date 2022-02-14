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
    bool res = true;
    short int n, tmp, w = 3;
    cin >> n;
    pair<short int, short int> now;
    now.first = 1;
    now.second = 2;
    vector<short int> a;
    for (short int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (short int i = 0; i < n; i++) {
        if (a[i] != now.first && a[i] != now.second) {
            res = false;
            break;
        } else {
            if (a[i] == now.first) {
                tmp = now.second;
                now.second = w;
                w = tmp;
            } else {
                tmp = now.first;
                now.first = w;
                w = tmp;
            }
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
