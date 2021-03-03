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
    int n, r, res = 0, last = -1;
    char tmp;
    cin >> n >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (last < n - 1) {
        int cur = -1;
        for (int i = n - 1; i > max(-1, last - r + 1); i--) {
            if (a[i] == 1 && i - r <= last) {
                cur = i;
                break;
            }
        }
        if (cur == -1) {
            cout << -1;
            return 0;
        }
        res++;
        last = cur + r - 1;
    }
    cout << res;
    return 0;
}
