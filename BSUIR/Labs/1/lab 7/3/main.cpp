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

void convert(string &s) {  // Convert from signed magnitude representation to
                           // 2nd complements form
    if (s[0] == '1') {
        for (int i = 1; i < static_cast<int>(s.size()); i++) {
            if (s[i] == '0') {
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }
        bool f = false;
        for (int i = s.size() - 1; i > 0; i--) {
            if (s[i] == '0') {  // Adding 1
                s[i] = '1';
                f = true;
                break;
            }
        }
        if (!f) {  // If the hadn't add 1, so we should make all digits from the
                   // 2nd equal to 0
            for (int i = 1; i < static_cast<int>(s.size()); i++) {
                s[i] = '0';
            }
        }
    }
}

string sum(
    string &a,
    string &b) {  // Getting sum of two binary numbers in 2nd complements form
    while (max(a.size(), b.size()) -
           a.size()) {  // Fitting to the largest number length
        a.insert(a.begin() + 1, '0');
    }
    while (max(a.size(), b.size()) -
           b.size()) {  // Fitting to the largest number length
        b.insert(b.begin() + 1, '0');
    }
    string res(a.size(), 0);
    for (int i = res.size() - 1; i > 0; i--) {
        res[i] += a[i] + b[i] - '0';
        if (res[i] > '1') {
            res[i] -= 2;
            res[i - 1]++;
        }
    }
    res[0] = a[0] + a[0] - '0';
    if (res[0] > '1') {
        res[0] -= 2;
    }
    return res;
}

// Variant 6
int main() {
    cout << "Enter two binary numbers in signed magnitude representation to "
            "get sum of them: ";
    string a, b, res;
    cin >> a >> b;
    for (auto i : a) {
        assert(i == '0' || i == '1');
    }
    for (auto i : b) {
        assert(i == '0' || i == '1');
    }
    convert(a);
    convert(b);
    cout << a << " " << b << " " << sum(a, b) << endl;
    return 0;
}
