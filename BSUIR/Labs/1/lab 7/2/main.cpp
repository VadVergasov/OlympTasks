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
#include <cassert>
#include <iostream>
#include <string>

using namespace std;

// Variant 6
int main() {
    cout << "Enter binary number in signed magnitude representation: ";
    string s;
    cin >> s;
    for (auto i : s) {
        assert(i == '0' || i == '1');
    }
    if (s[0] ==
        '1') {  // If it's negative number we should invert all other digits
        for (int i = 1; i < static_cast<int>(s.size()); i++) {
            if (s[i] == '0') {
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }
    }
    cout << s << endl;
    return 0;
}
