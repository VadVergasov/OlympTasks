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
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, n1;
    cin >> n;
    n1 = n;
    int sum = 0;
    set<int> nums;
    bool f = true;
    while (n1) {
        if (nums.find(n1 % 10) != nums.end()) {
            f = false;
        }
        nums.insert(n1 % 10);
        sum += n1 % 10;
        n1 /= 10;
    }
    if (n < 100 || n > 100000) {
        cout << "FALSE";
    } else if (f || sum == 13) {
        cout << "ENTER";
    } else {
        cout << "LOCK";
    }
    return 0;
}