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
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        a.push_back(i + 1);
    }
    for (int i = 0; i < n; i++) {
        int nod = a[i];
        for (int j = i + 1; j < n; j++) {
            nod = __gcd(nod, a[j]);
        }
        a.push_back(nod);
    }
    for (int i = n; i < 2 * n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
