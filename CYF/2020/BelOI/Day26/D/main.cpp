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
    for (int q = 0; q < 11; q++) {
        ifstream in("input" + to_string(q) + ".txt");
        ofstream out("output" + to_string(q) + ".txt");
        int r, c, t;
        in >> r >> c >> t;
        vector<vector<char> > a(4 * r + 1, vector<char>(2 * c + 5));
        pair<int, int> s;
        for (int i = 0; i < 4 * r + 1; i++) {
            for (int j = 0; j < 2 * c + 5; j++) {
                cin >> a[i][j];
                if (a[i][j] == 'B') {
                    s = {i, j};
                }
            }
        }
    }
    return 0;
}