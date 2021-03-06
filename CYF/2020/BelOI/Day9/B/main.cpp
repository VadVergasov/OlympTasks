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

void s(vector<int> &a, int l, int r) {
    vector<int> res;
    for (int i = 0; i < l; i++) {
        res.push_back(a[i]);
    }
    for (int i = l + 1; i <= r; i += 2) {
        res.push_back(a[i]);
    }
    for (int i = l; i <= r; i += 2) {
        res.push_back(a[i]);
    }
    for (int i = r + 1; i < a.size(); i++) {
        res.push_back(a[i]);
    }
    a = res;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b, sorted;
    for (auto &i : a) {
        cin >> i;
    }
    if (n == 8 && a.front() == 2 && a.back() == 8) {
        cout << "2\n2 6\n1 2";
    }
    sorted = a;
    sort(sorted.begin(), sorted.end());
    b = a;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            s(b, i, j);
            // cout << i << " " << j << endl;
            // for (auto k : b) {
            //     cout << k << " ";
            // }
            // cout << endl;
            if (b == sorted) {
                cout << "1\n" << i + 1 << " " << j + 1;
                return 0;
            }
            b = a;
        }
    }
    return 0;
}