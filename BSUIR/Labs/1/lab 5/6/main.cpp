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

int f(int n) {
    if (n % 10 > 0) {
        return n % 10;
    }
    if (n == 0) {
        return 0;
    }
    return f(n / 10);
}

int s(int p, int q) {
    int res = 0;
    for (int i = p; i <= q; i++) {
        res += f(i);
    }
    return res;
}

int main() {
    while (1) {
        int p, q;
        cout << "Enter p and q (-1 -1) to exit: ";
        while (!(cin >> p >> q) || p > q) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter p and q (-1 -1) to exit: ";
        }
        if (p < 0 && q < 0) {
            break;
        }
        cout << s(p, q) << endl;
    }
    return 0;
}
