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

char str[80];

// Variant 6
int main() {
    bool f = false;
    cout << "Enter the string: ";
    cin >> str;
    cout << str << endl;
    for (int i = 0; i < 80; i++) {
        if (isdigit(str[i])) {
            cout << str[i];
            f = true;
        } else if (f) {
            break;
        }
    }
    return 0;
}
