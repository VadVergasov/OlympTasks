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

using namespace std;

int main() {
    int n, i, cur = 0;
    cout << "Enter the number (n) and rank number (i): ";
    while (!(cin >> n >> i) || n > 0 || i < 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the number (n) and rank number (i): ";
    }
    while (n) {
        if (i == cur) {
            cout << "i-th number: " << n % 10 << endl;
        }
        n /= 10;
        cur++;
    }
    cout << "Number of ranks: " << cur << endl;
    return 0;
}
