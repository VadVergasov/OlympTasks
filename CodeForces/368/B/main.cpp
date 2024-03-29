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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), prefix(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> nums;
    for (int i = n - 1; i >= 0; i--) {
        nums.insert(a[i]);
        prefix[i] = nums.size();
    }
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cout << prefix[t - 1] << "\n";
    }
    return 0;
}