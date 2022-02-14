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

unsigned long long fib1(int n) {
    if (n == 1 | n == 2) {
        return 1;
    }
    return fib1(n - 1) + fib1(n - 2);
}

unsigned long long fib2(int n, unsigned long long* f) {
    if (f[n]) {
        return f[n];
    }
    return f[n] = fib2(n - 1, f) + fib2(n - 2, f);
}

int main() {
    int n;
    cin >> n;
    unsigned long long* f = new unsigned long long[(n < 3) ? 3 : n + 1];
    for (int i = 0; i <= n; i++) {
        f[i] = 0;
    }
    f[1] = 1;
    f[2] = 1;
    cout << fib1(n) << " " << fib2(n, f);
    delete[] f;
    return 0;
}
