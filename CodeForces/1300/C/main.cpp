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
// https://codeforces.com/contest/1300/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (long long i = 32; i >= 0; i--) {
        long long num = 0;
        for (auto j : a) {
            if (j & (1LL << i)) {
                num++;
            }
        }
        if (num == 1) {
            long long number = -1;
            for (auto j : a) {
                if (j & (1LL << i)) {
                    number = j;
                    cout << j << " ";
                    break;
                }
            }
            for (auto j : a) {
                if (j == number) {
                    continue;
                }
                cout << j << " ";
            }
            return 0;
        }
    }
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}