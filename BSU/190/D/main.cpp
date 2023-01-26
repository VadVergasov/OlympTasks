// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<bool> accessible(n + 1, false);
    for (auto& i : a) {
        cin >> i;
    }
    accessible[0] = true;
    for (int i = 0; i < m; i++) {
        accessible[1 + i] = true;
    }
    vector<bool> accessible_new = accessible;
    bool cont = true;
    while (cont) {
        for (int i = 1; i <= n; i++) {
            if (!accessible_new[i]) {
                continue;
            }
            if (a[i - 1] == 0) {
                for (int j = 1; j <= m; j++) {
                    if (i + j > n) {
                        break;
                    }
                    accessible_new[i + j] = true;
                }
                continue;
            }
            accessible_new[min(max(0, i + a[i - 1]), n)] = true;
        }
        if (accessible == accessible_new || accessible_new[n]) {
            cont = false;
        }
        accessible = accessible_new;
    }
    if (accessible.back()) {
        cout << "gg";
    } else {
        cout << "glhf";
    }
    return 0;
}
