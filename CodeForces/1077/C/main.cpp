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

int a[10000000];

int main() {
    long long sum = 0;
    long long n, tmp, res = 0;
    cin >> n;
    vector<long long> b, r;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp]++;
        sum += tmp;
        b.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        a[b[i]]--;
        if ((sum - b[i]) / 2 > 10e6 + 2) {
            continue;
        }
        if ((sum - b[i]) % 2 == 0 && a[(sum - b[i]) / 2] > 0) {
            res++;
            r.push_back(i + 1);
        }
        a[b[i]]++;
    }
    cout << res << "\n";
    for (int i = 0; i < res; i++) {
        cout << r[i] << " ";
    }
    return 0;
}
