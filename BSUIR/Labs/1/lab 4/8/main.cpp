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
#include <vector>

using namespace std;

int main() {
    int n, mx = -1e9, mn = 1e9, cnt = 0;
    cout << "Enter the number of array members: ";
    while (!(cin >> n) || n > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the number of array members: ";
    }
    vector<int> a(n), b;
    for (auto &i : a) {
        cout << "Enter the next number of array: ";
        while (!(cin >> i)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the next number of array: ";
        }
        mx = max(mx, i);
        mn = min(mn, i);
    }
    bool f = false;
    for (auto &i : a) {
        if (i == mn || i == mx) {
            f = !f;
            continue;
        }
        if (f) {
            cnt++;
            i = 0;
        }
    }
    if (cnt > n / 2) {
        for (auto i : a) {
            if (i != 0) {
                b.push_back(i);
            }
        }
    } else {
        for (auto i : a) {
            b.push_back(i);
        }
    }
    for (auto i : b) {
        cout << i << " ";
    }
    return 0;
}
