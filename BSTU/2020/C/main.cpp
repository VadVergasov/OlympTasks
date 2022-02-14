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

void dfs(int v, vector<int> &a, set<int> &used) {
    if (v == 1) {
        used.insert(v);
        return;
    }
    used.insert(v);
    if (used.find(a[v - 2]) == used.end()) {
        dfs(a[v - 2], a, used);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n - 1), b(k);
    for (int i = 1; i < n; i++) {
        cin >> a[i - 1];
    }
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }
    set<int> used;
    for (int i = 0; i < k; i++) {
        if (used.find(b[i]) == used.end()) {
            dfs(b[i], a, used);
        }
    }
    cout << used.size();
    return 0;
}