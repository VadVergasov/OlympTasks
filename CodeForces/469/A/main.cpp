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
    int n, tmp, p, q;
    cin >> n;
    vector<int> a;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if (a.size() == 0 || a[0] != 1) {
        cout << "Oh, my keyboard!";
        return 0;
    }
    int t = a[0];
    for (int i = 1; i < a.size(); i++) {
        t = a[i];
        if (!(a[i - 1] + 1 >= a[i])) {
            break;
        }
    }
    if (t != n) {
        cout << "Oh, my keyboard!";
    } else {
        cout << "I become the guy.";
    }
    return 0;
}
