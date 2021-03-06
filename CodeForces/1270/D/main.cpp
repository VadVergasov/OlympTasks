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
    int n, k, mx = 0;
    multiset<int> nums;
    cin >> n >> k;
    for (int i = 0; i < k + 1; i++) {
        cout << "? ";
        for (int j = 0; j < k + 1; j++) {
            if (i == j) {
                continue;
            }
            cout << j + 1 << " ";
        }
        cout << endl;
        flush(cout);
        int a, b;
        cin >> a >> b;
        mx = max(mx, b);
        nums.insert(b);
    }
    cout << "! " << nums.count(mx) << endl;
    flush(cout);
    return 0;
}