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

int main() {
    int n;
    cout << "Enter size of square to build: ";
    while (!(cin >> n) || n <= 0 || n > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter size of square to build: ";
    }
    if (n % 2 == 1) {
        vector<vector<int> > a(n * 2 - 1, vector<int>(n * 2 - 1));
        int cur = 1;
        for (int i = n - 1; i < n * 2 - 1; i++) {
            for (int j = 0; j < n; j++) {
                a[i - j][j + (i - n + 1)] = cur;
                if (i - j < (n - 1) / 2) {
                    a[n + (i - j)][j + (i - n + 1)] = cur;
                }
                if (i - j > n * 2 - 2 - ((n - 1) / 2)) {
                    a[i - j - n][j + (i - n + 1)] = cur;
                }
                if (j + (i - n + 1) < (n - 1) / 2) {
                    a[i - j][n + j + (i - n + 1)] = cur;
                }
                if (j + (i - n + 1) > n * 2 - 2 - ((n - 1) / 2)) {
                    a[i - j][j + (i - n + 1) - n] = cur;
                }
                cur++;
            }
        }
        for (int i = (n - 1) / 2; i < n * 2 - 1 - (n - 1) / 2; i++) {
            for (int j = (n - 1) / 2; j < n * 2 - 1 - (n - 1) / 2; j++) {
                cout.width(to_string(n * n).size());
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    } else if (n % 4 == 0) {
        vector<vector<int> > a(n, vector<int>(n));
        int cur = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = cur;
                cur++;
            }
        }
        for (int i = 0; i < n / 2; i++) {
            swap(a[i][i], a[n - i - 1][n - i - 1]);
            swap(a[n - i - 1][i], a[i][n - i - 1]);
        }
        for (int i = 4; i < n; i += 4) {
            for (int j = 0; j < n - i; j++) {
                swap(a[i + j][j], a[n - i - j - 1][n - j - 1]);
            }
        }
        for (int i = 3; i < n; i += 4) {
            for (int j = 0; j <= i; j++) {
                swap(a[j][i - j], a[n - j - 1][n - i + j - 1]);
            }
        }
        for (auto i : a) {
            for (auto j : i) {
                cout.width(to_string(n * n).size());
                cout << j << " ";
            }
            cout << endl;
        }
    } else if (n % 2 == 0 && n != 2) {
        int sz = n / 2;
        vector<vector<int> > res(n, vector<int>(n)),
            a(sz * 2 - 1, vector<int>(sz * 2 - 1));
        int cur = 1;
        for (int i = sz - 1; i < sz * 2 - 1; i++) {
            for (int j = 0; j < sz; j++) {
                a[i - j][j + (i - sz + 1)] = cur;
                if (i - j < (sz - 1) / 2) {
                    a[sz + (i - j)][j + (i - sz + 1)] = cur;
                }
                if (i - j > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j - sz][j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) < (sz - 1) / 2) {
                    a[i - j][sz + j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j][j + (i - sz + 1) - sz] = cur;
                }
                cur++;
            }
        }
        for (int i = (sz - 1) / 2; i < sz * 2 - 1 - (sz - 1) / 2; i++) {
            for (int j = (sz - 1) / 2; j < sz * 2 - 1 - (sz - 1) / 2; j++) {
                res[i - (sz - 1) / 2][j - (sz - 1) / 2] = a[i][j];
            }
        }
        for (int i = sz - 1; i < sz * 2 - 1; i++) {
            for (int j = 0; j < sz; j++) {
                a[i - j][j + (i - sz + 1)] = cur;
                if (i - j < (sz - 1) / 2) {
                    a[sz + (i - j)][j + (i - sz + 1)] = cur;
                }
                if (i - j > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j - sz][j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) < (sz - 1) / 2) {
                    a[i - j][sz + j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j][j + (i - sz + 1) - sz] = cur;
                }
                cur++;
            }
        }
        for (int i = (sz - 1) / 2; i < sz * 2 - 1 - (sz - 1) / 2; i++) {
            for (int j = (sz - 1) / 2; j < sz * 2 - 1 - (sz - 1) / 2; j++) {
                res[i - (sz - 1) / 2 + sz][j - (sz - 1) / 2 + sz] = a[i][j];
            }
        }
        for (int i = sz - 1; i < sz * 2 - 1; i++) {
            for (int j = 0; j < sz; j++) {
                a[i - j][j + (i - sz + 1)] = cur;
                if (i - j < (sz - 1) / 2) {
                    a[sz + (i - j)][j + (i - sz + 1)] = cur;
                }
                if (i - j > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j - sz][j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) < (sz - 1) / 2) {
                    a[i - j][sz + j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j][j + (i - sz + 1) - sz] = cur;
                }
                cur++;
            }
        }
        for (int i = (sz - 1) / 2; i < sz * 2 - 1 - (sz - 1) / 2; i++) {
            for (int j = (sz - 1) / 2; j < sz * 2 - 1 - (sz - 1) / 2; j++) {
                res[i - (sz - 1) / 2][j - (sz - 1) / 2 + sz] = a[i][j];
            }
        }
        for (int i = sz - 1; i < sz * 2 - 1; i++) {
            for (int j = 0; j < sz; j++) {
                a[i - j][j + (i - sz + 1)] = cur;
                if (i - j < (sz - 1) / 2) {
                    a[sz + (i - j)][j + (i - sz + 1)] = cur;
                }
                if (i - j > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j - sz][j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) < (sz - 1) / 2) {
                    a[i - j][sz + j + (i - sz + 1)] = cur;
                }
                if (j + (i - sz + 1) > sz * 2 - 2 - ((sz - 1) / 2)) {
                    a[i - j][j + (i - sz + 1) - sz] = cur;
                }
                cur++;
            }
        }
        for (int i = (sz - 1) / 2; i < sz * 2 - 1 - (sz - 1) / 2; i++) {
            for (int j = (sz - 1) / 2; j < sz * 2 - 1 - (sz - 1) / 2; j++) {
                res[i - (sz - 1) / 2 + sz][j - (sz - 1) / 2] = a[i][j];
            }
        }
        swap(res[0][0], res[sz][0]);
        swap(res[sz - 1][0], res[n - 1][0]);
        for (int i = 1; i < sz - 1; i++) {
            swap(res[i][1], res[sz + i][1]);
        }
        for (int i = 0; i < sz / 2 - 1; i++) {
            for (int j = 0; j < sz; j++) {
                swap(res[j][sz - i - 1], res[sz + j][sz - i - 1]);
                swap(res[j][sz + i], res[sz + j][sz + i]);
            }
        }
        for (auto i : res) {
            for (auto j : i) {
                cout.width(to_string(n * n).size());
                cout << j << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution" << endl;
    }
    return 0;
}
