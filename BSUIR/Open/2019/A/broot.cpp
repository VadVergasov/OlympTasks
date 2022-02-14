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

vector<long long> res;

int main() {
    long long sum = 0;
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = -1000; j < 1001; j++) {
            res.push_back(sum - a[i] + j * a[i]);
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        if (res[i] >= 0 && res[i] % 2 == 0) {
            cout << res[i];
            return 0;
        }
    }
    return 0;
}