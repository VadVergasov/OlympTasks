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
    int n;
    char tmp;
    cin >> n;
    vector<vector<char> > a, b, c;
    vector<char> t;
    t.resize(n + 2, '.');
    a.resize(n + 2, t);
    b.resize(n + 2, t);
    c.resize(n + 2, t);
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cin >> tmp;
            a[i][j] = tmp;
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cin >> tmp;
            b[i][j] = tmp;
        }
    }
    bool bo = false;
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (b[i][j] == 'x') {
                if (a[i][j] == '.') {
                    int k = 0;
                    if (a[i][j + 1] == '*') {
                        k++;
                    }
                    if (a[i][j - 1] == '*') {
                        k++;
                    }
                    if (a[i + 1][j + 1] == '*') {
                        k++;
                    }
                    if (a[i - 1][j + 1] == '*') {
                        k++;
                    }
                    if (a[i + 1][j - 1] == '*') {
                        k++;
                    }
                    if (a[i + 1][j] == '*') {
                        k++;
                    }
                    if (a[i - 1][j - 1] == '*') {
                        k++;
                    }
                    if (a[i - 1][j] == '*') {
                        k++;
                    }
                    c[i][j] = (k + '0');
                }
                if (a[i][j] == '*') {
                    bo = true;
                }
            }
        }
    }
    if (bo) {
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (a[i][j] == '*') {
                    c[i][j] = '*';
                }
            }
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cout << c[i][j];
        }
        cout << "\n";
    }
    return 0;
}
