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
#include <iostream>

using namespace std;

int main() {
    unsigned long long n, mask = 1;
    cin >> n;
    while (n & mask) {
        n &= ~mask;
        mask <<= 1;
    }
    n |= mask;
    unsigned int a = 0, b = 0;
    for (int i = 0; i <= 64; i++) {
        a ^= (~(a | (1 << i)));
        b ^= b | (1 << i);
    }
    cout << n << " " << a << " " << b << " " << ((1 << 32) | (1 << 31)) << " "
         << ((~1 < -10) ? 0 : 1 + 123);
    return 0;
}
