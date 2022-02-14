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
    int tmp;
    vector<int> a;
    for (int i = 0; i < 4; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if (max(a[0] + a[1] - a[2], a[1] + a[2] - a[3]) > 0) {
        cout << "TRIANGLE";
    } else if (max(a[0] + a[1] - a[2], a[1] + a[2] - a[3]) < 0) {
        cout << "IMPOSSIBLE";
    } else {
        cout << "SEGMENT";
    }
    return 0;
}
