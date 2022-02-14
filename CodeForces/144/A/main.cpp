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
    int n, tmp, mn = 100, mx = 0, mnpos, mxpos;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mn = min(mn, tmp);
        mx = max(mx, tmp);
        a.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) {
            mnpos = i + 1;
        }
        if (a[i] == mx) {
            mxpos = i + 1;
        }
    }
    cout << abs(mxpos + 1 - n) + mnpos - 2;
    return 0;
}
