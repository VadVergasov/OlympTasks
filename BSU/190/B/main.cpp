// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int zero = 0, one = 0, two = 0;
    for (const auto& i : to_string(n)) {
        if (i == '0') {
            zero++;
        } else if (i == '1') {
            one++;
        } else if (i == '2') {
            two++;
        }
    }
    if (zero == 1 && one == 1 && two == 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
