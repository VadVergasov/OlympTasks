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

int main() {
    int n;
    cout << "Enter the number of members of the sequence: ";
    while (!(cin >> n)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the number of members of the sequence: ";
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cout << "Enter the " << i << "-members of the sequence: ";
        while (!(cin >> a)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the " << i << "-members of the sequence: ";
        }
        if (i % 2 == 0) {
            sum += a * 1 << (i);
        } else {
            sum -= a * 1 << (i);
        }
    }
    cout << sum << endl;
    return 0;
}
