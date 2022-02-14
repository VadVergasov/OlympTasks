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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        deque<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[i];
        }
        bool f = false;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] == 2048) {
                cout << "YES\n";
                f = true;
                break;
            }
            if (a[i] == a[i + 1]) {
                a[i] *= 2;
                a.pop_front();
            }
        }
        if (!f) {
            cout << "NO\n";
        }
    }
    return 0;
}