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
#include <iostream>
#include <vector>

using namespace std;

const vector<pair<int, int> > dirs = {{1, 0},  {1, 1},  {1, -1}, {0, 1},
                                      {-1, 1}, {0, -1}, {-1, 0}, {-1, -1}};

int main() {
    int n, m;
    cout << "Enter the size of minesweeper field: ";
    while (!(cin >> n >> m) || n <= 0 || n > 1e6 || m <= 0 || m > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of minesweeper field: ";
    }
    char **field = new char *[n + 2];
    for (int i = 0; i < n + 2; i++) {
        field[i] = new char[m + 2];
        for (int j = 0; j < m + 2; j++) {
            field[i][j] = '.';
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "Enter the next field element (. - for empty place, * - "
                    "for mine): ";
            while (!(cin >> field[i][j]) ||
                   (field[i][j] != '.' && field[i][j] != '*')) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout
                    << "Enter the next field element (. - for empty place, * - "
                       "for mine): ";
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (field[i][j] != '*') {
                char cnt = '0';
                for (auto [f, s] : dirs) {
                    if (field[i + f][j + s] == '*') {
                        cnt++;
                    }
                }
                field[i][j] = cnt;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
