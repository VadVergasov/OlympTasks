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

ofstream out("OUTPUT.TXT");
ifstream in("INPUT.TXT");

int main() {
    int k, n;
    cin >> k >> n;
    if (k == 1) {
        cout << 1;
        return 0;
    }
    vector<long long> a;
    a.resize(n + k, 0);
    a[k] = 1;
    for (int i = k + 1; i < 2 * k; i++) {
        for (int j = i - 1; j >= k; j--) {
            a[i] += a[j];
        }
        a[i]++;
    }
    for (int i = 2 * k; i < n + k; i++) {
        for (int j = 1; j <= k; j++) {
            a[i] += a[i - j];
        }
    }
    cout << a[a.size() - 1];
    return 0;
}
