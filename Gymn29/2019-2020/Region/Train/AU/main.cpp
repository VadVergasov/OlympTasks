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
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 0) {
            num1++;
        } else if (num1 == 1) {
            num2++;
        }
    }
    if (num1 == 0) {
        cout << -1;
    } else if (num1 == 1) {
        cout << -2;
    } else {
        cout << num2;
    }
    return 0;
}