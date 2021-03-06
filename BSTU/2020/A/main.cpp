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

long long fact(long long n, long long p) {
    long long res = 1;
    while (n > 1) {
        res = (res * ((n / p) % 2 ? p - 1 : 1)) % p;
        for (int i = 2; i <= n % p; ++i) {
            res = (res * i) % p;
        }
        n /= p;
    }
    return res % p;
}

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    cout << fact(n, m) << "\n";
    cin >> n >> m;
    cout << fact(n, m) << "\n";
    cin >> n >> m;
    cout << fact(n, m);
    return 0;
}