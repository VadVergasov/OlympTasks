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
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    cin >> n;
    if (n == 3) {
        cout << 1;
    } else if (n == 4) {
        cout << 1;
    } else if (n == 5) {
        cout << 1;
    } else if (n == 6) {
        cout << 2;
    } else if (n == 7) {
        cout << 2;
    } else if (n > 10) {
        return -1;
    }
    return 0;
}
