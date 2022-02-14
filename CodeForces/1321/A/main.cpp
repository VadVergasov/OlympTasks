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
// https://codeforces.com/contest/1321/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double sum1 = 0, sum2 = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (auto &i : b) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] && !b[i]) {
            sum1++;
        }
        if (!a[i] && b[i]) {
            sum2++;
        }
    }
    if (sum1 == 0) {
        cout << -1;
        return 0;
    }
    cout << (int)ceil((sum2 + 1) / sum1);
    return 0;
}