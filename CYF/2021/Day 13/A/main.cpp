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

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("tune=native")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    cin.tie(0);
    cout.tie(0);
    long long n, res = 0;
    cin >> n;
    long long i;
    for (i = 1; i <= 1e6; i++) {
        if (i * i > n) {
            res += i * max(0LL, (n - (i - 1) * (i - 1)));
            break;
        }
        res += i * (i * i - (i - 1) * (i - 1));
    }
    for (i = 1; i <= 1e4; i++) {
        if ((i + 1) * (i + 1) * (i + 1) > n) {
            res += i * max(0LL, n - i * i * i + 1);
            break;
        }
        res += i * ((i + 1) * (i + 1) * (i + 1) - i * i * i);
    }
    cout << res;
    return 0;
}
