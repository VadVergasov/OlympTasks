"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

vector<vector<vector<pair<int, int> > > > res = {
    {{{2, 2}, {1, 2}, {2, 1}}, {{2, 1}, {2, 2}, {1, 2}}},
    {{{1, 2}, {2, 2}, {1, 1}}, {{1, 1}, {1, 2}, {2, 1}}}};

int main() {
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    if (n < 3) {
        cout << "Yes\n1\n";
        x--;
        y--;
        for (auto [f, s] : res[x][y]) {
            cout << f << " " << s << " ";
        }
    } else {
        return 1;
    }
    return 0;
}
