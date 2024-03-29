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
    ifstream in("input.txt");
    ofstream out("output.txt");
    vector<vector<char> > f(12, vector<char>(12, '.'));
    vector<vector<int> > a(12, vector<int>(12, 0));
    vector<set<pair<int, int> > > ships;
    int num = 0;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            in >> f[i][j];
            if (f[i][j] == '#' && f[i - 1][j] == '.' && f[i][j - 1] == '.') {
                set<pair<int, int> > c;
                c.insert(make_pair(i, j));
                a[i][j] = num;
                ships.push_back(c);
                num++;
            } else if (f[i][j] == '#' && f[i - 1][j] == '#') {
                ships[a[i - 1][j]].insert(make_pair(i, j));
            } else if (f[i][j] == '#' && f[i][j - 1] == '#') {
                ships[a[i][j - 1]].insert(make_pair(i, j));
            }
        }
    }
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        char b;
        in >> x >> b;
        if (b == 'k') {
            b--;
        }
        y = b - 'a' + 1;
        if (f[x][y] == '#') {
            if (ships[a[x][y]].size() == 1) {
                num--;
                if (num == 0) {
                    out << "GAME OVER\n";
                    return 0;
                }
                ships[a[x][y]].erase(make_pair(x, y));
                out << "DEAD\n";
            } else {
                out << "HIT\n";
                ships[a[x][y]].erase(make_pair(x, y));
            }
            f[x][y] = '.';
        } else if (f[x][y] == '.') {
            out << "MISS\n";
        }
    }
    return 0;
}