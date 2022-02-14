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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string n, a = "", b = "";
        cin >> n;
        b.resize(n.size(), '0');
        int cur = n.find("4");
        while (cur != string::npos) {
            b[cur] = '1';
            n[cur]--;
            cur = n.find("4");
        }
        while (b[0] == '0') {
            b.erase(0, 1);
        }
        a = n;
        while (a[0] == '0') {
            a.erase(0, 1);
        }
        cout << "Case #" << i + 1 << ": " << a << " " << b << "\n";
    }
    return 0;
}