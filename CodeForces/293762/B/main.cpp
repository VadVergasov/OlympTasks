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
    vector<int> a(4);
    for (auto &i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    do {
        for (int i = 1; i < 4; i++) {
            int sum1 = 0, sum2 = 0;
            for (int j = 0; j < i; j++) {
                sum1 += a[j];
            }
            for (int j = i; j < 4; j++) {
                sum2 += a[j];
            }
            if (sum1 == sum2) {
                cout << "YES";
                return 0;
            }
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << "NO";
    return 0;
}