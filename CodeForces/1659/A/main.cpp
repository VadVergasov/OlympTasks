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
    int t;
    cin >> t;
    while (t--) {
        int n, b, r;
        cin >> n >> r >> b;
        int count = r / (b + 1), rest = r % (b + 1);
        for (int i = 0; i < rest; i++) {
            cout << string(count + 1, 'R') << "B";
        }
        for (int i = rest; i < b; i++) {
            cout << string(count, 'R') << "B";
        }
        cout << string(count, 'R') << endl;
    }
    return 0;
}
