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

#pragma GCC optimize("O3,no-stack-protector,unroll-loops")

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    int cur = 1, i = 1;
    while (cur < n) {
        cout << cur << endl;
        int mx = 0, num = cur;
        while (num) {
            mx = max(mx, num % 10);
            num /= 10;
        }
        w cur += mx;
        i++;
    }
    if (cur == n) {
        out << i;
    } else {
        out << -1;
    }
    return 0;
}