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
    int n;
    cin >> n;
    set<int> a;
    int sum = 0, cur = 1, res = 0;
    while (sum != n) {
        sum += cur;
        if (sum > n) {
            sum -= (cur - 1);
            a.erase(cur - 1);
        }
        a.insert(cur);
        cur++;
    }
    cout << a.size() << "\n";
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}