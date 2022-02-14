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
    int n, eight = 0;
    char tmp;
    cin >> n;
    vector<char> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == '8') {
            eight++;
        }
        a.push_back(tmp);
    }
    if (n < 11 || eight == 0) {
        cout << 0;
        return 0;
    } else {
        cout << min((double)eight, floor(n / 11.0));
    }
    return 0;
}
