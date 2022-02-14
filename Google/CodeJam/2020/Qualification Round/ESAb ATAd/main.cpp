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
    int t, b, cur = 0;
    cin >> t >> b;
    while (cur++ < t) {
        vector<bool> res(b, false);
        for (int i = 0; i < b; i++) {
            cout << i + 1 << endl;
            flush(cout);
            bool r;
            cin >> r;
            res[i] = r;
        }
        for (int i = 0; i < b; i++) {
            cout << res[i];
        }
        cout << endl;
        flush(cout);
        char r;
        cin >> r;
        if (r == 'N') {
            return 0;
        }
    }
    return 0;
}