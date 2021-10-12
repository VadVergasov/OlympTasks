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

unsigned long long pow_mod(unsigned long long k, unsigned long long n,
                           unsigned long long m) {
    if (!n) {
        return 1;
    }
    __int128_t prev = pow_mod(k, n / 2, m);
    if (n % 2 == 0) {
        return (prev * prev) % m;
    }
    return ((__int128_t)k * prev * prev) % m;
}

int main() {
    int cur = 0;
    while (1) {
        cur++;
        long long k, n;
        int t;
        cout << "Enter k n t (0 0 0) to exit: ";
        while (!(cin >> k >> n >> t) || t > 9 || k < 0 || n < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter k n t (0 0 0) to exit: ";
        }
        if (k == 0 && n == 0 && t == 0) {
            break;
        }
        unsigned long long mod = 1;
        for (int i = 0; i < t; i++) {
            mod *= 10;
        }
        k %= mod;
        cout << "Case #" << cur << ": " << pow_mod(k, n, mod) << endl;
    }
    return 0;
}
