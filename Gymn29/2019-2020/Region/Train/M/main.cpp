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

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, i, j;
    in >> m >> n >> i >> j;
    long long cur = 1;
    if (i <= j) {
        for (int k = 0; k < i; ++k) {
            if (k % 2 == 0) {
                if (k != i - 1) {
                    cur += n - k;
                } else {
                    cur += j - k - 1;
                    out << cur;
                    return 0;
                }
            } else {
                cur += m - k;
                if (k != i - 1) {
                    cur += n - k;
                } else {
                    cur += n - j;
                    out << cur;
                    return 0;
                }
                cur += m - k - 1;
            }
        }
    } else {
        cur = n + 1;
        for (int k = 0; k < j; ++k) {
            if (k % 2 == 0) {
                if (k != j - 1) {
                    cur += m - k - 1;
                } else {
                    cur += i - k - 2;
                    out << cur;
                    return 0;
                }
            } else {
                cur += n - k;
                if (k != j - 1) {
                    cur += m - 1 - k;
                } else {
                    cur += m - i;
                    out << cur;
                    return 0;
                }
                cur += n - k - 1;
            }
        }
    }
    return 0;
}