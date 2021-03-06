// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
        int a;
        cin >> a;
        int x, y, counter = 0;
        cout << 2 << " " << 2 << endl;
        set<pair<int, int> > all;
        while (cin >> x >> y) {
            if (x == 0 && y == 0) {
                break;
            }
            if (x == -1 && y == -1) {
                return 0;
            }
            all.insert(make_pair(x, y));
            if (all.size() >= 9) {
                counter++;
                all.clear();
            }
            cout << 2 + counter * 3 << " " << 2 << endl;
        }
    }
    return 0;
}