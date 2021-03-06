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

vector<vector<int>> a, b, c;
const int base = 1e+9 + 42;
const long long mod = base * (long long)base;

int main() {
    srand(time(NULL));
    int n = 1000;
    a = vector<vector<int>>(n, vector<int>(n, 0));
    b = vector<vector<int>>(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = rand() % base;
            b[i][j] = rand() % base;
        }
    }
    c = vector<vector<int>>(n, vector<int>(n, 0));

    {
        auto start = clock();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int r = 0;
                for (int k = 0; k < n; ++k) {
                    r = (r + (long long)a[i][k] * b[k][j]) % base;
                }
                c[i][j] = r;
            }
        }

        cerr << "with module: " << (clock() - start) / (double)CLOCKS_PER_SEC
             << " sec" << endl;
        int s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                s = (s + c[i][j]) % base;
            }
        }
        cerr << s << endl;
    }

    {
        auto start = clock();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                long long r = 0;
                for (int k = 0; k < n; ++k) {
                    r += (long long)a[i][k] * b[k][j];
                    if (r >= mod) {
                        r -= mod;
                    }
                }
                c[i][j] = r % base;
            }
        }

        cerr << "without module: " << (clock() - start) / (double)CLOCKS_PER_SEC
             << " sec" << endl;
        int s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                s = (s + c[i][j]) % base;
            }
        }
        cerr << s << endl;
    }

    {
        auto d = vector<vector<int>>(n, vector<int>(n, 0));
        auto start = clock();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                d[i][j] = b[j][i];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                long long r = 0;
                for (int k = 0; k < n; ++k) {
                    r += (long long)a[i][k] * d[j][k];
                    if (r >= mod) {
                        r -= mod;
                    }
                }
                c[i][j] = r % base;
            }
        }

        cerr << "with transpose: " << (clock() - start) / (double)CLOCKS_PER_SEC
             << " sec" << endl;
        int s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                s = (s + c[i][j]) % base;
            }
        }
        cerr << s << endl;
    }
    return 0;
}
