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
    int n;
    cin >> n;
    map<int, int> a1;
    vector<int> a2(n);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a1[t] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> a2[i];
    }
    int res = 0, shift = 0;
    for (int i = 0; i < n; i++) {
        cout << a1[a2[i]] << " " << i << " " << shift << "\n";
        if (a1[a2[i]] + shift > i) {
            res++;
            shift++;
        }
    }
    cout << res;
    return 0;
}