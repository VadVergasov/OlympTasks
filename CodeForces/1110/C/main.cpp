"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int st = floor(log2(a[i])) + 1;
        int num = 1 << st;
        num--;
        if ((a[i] ^ num) == 0) {
            if (a[i] == 3) {
                cout << 1 << "\n";
                continue;
            }
            if (a[i] == 7) {
                cout << 1 << "\n";
                continue;
            }
            if (a[i] == 15) {
                cout << 5 << "\n";
                continue;
            }
            if (a[i] == 31) {
                cout << 1 << "\n";
                continue;
            }
            if (a[i] == 63) {
                cout << 21 << "\n";
                continue;
            }
            if (a[i] == 127) {
                cout << 1 << "\n";
                continue;
            }
            if (a[i] == 255) {
                cout << 85 << "\n";
                continue;
            }
            if (a[i] == 511) {
                cout << 73 << "\n";
                continue;
            }
            if (a[i] == 1023) {
                cout << 341 << "\n";
                continue;
            }
            if (a[i] == 2047) {
                cout << 89 << "\n";
                continue;
            }
            if (a[i] == 4095) {
                cout << 1365 << "\n";
                continue;
            }
            if (a[i] == 8191) {
                cout << 1 << "\n";
                continue;
            }
            if (a[i] == 16383) {
                cout << 5461 << "\n";
                continue;
            }
            if (a[i] == 32767) {
                cout << 4681 << "\n";
                continue;
            }
            if (a[i] == 65535) {
                cout << 21845 << "\n";
                continue;
            }
            if (a[i] == 131071) {
                cout << 1 << "\n";
                continue;
            }
            if (a[i] == 262143) {
                cout << 87381 << "\n";
                continue;
            }
            if (a[i] == 524287) {
                cout << 1 << "\n";
                continue;
            }
            if (a[i] == 1048575) {
                cout << 349525 << "\n";
                continue;
            }
            if (a[i] == 2097151) {
                cout << 299593 << "\n";
                continue;
            }
            if (a[i] == 4194303) {
                cout << 1398101 << "\n";
                continue;
            }
            if (a[i] == 8388607) {
                cout << 178481 << "\n";
                continue;
            }
            if (a[i] == 16777215) {
                cout << 5592405 << "\n";
                continue;
            }
            if (a[i] == 33554431) {
                cout << 1082401 << "\n";
                continue;
            }
        } else {
            cout << num << "\n";
        }
    }
    return 0;
}