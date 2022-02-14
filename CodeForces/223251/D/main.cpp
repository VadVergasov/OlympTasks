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

vector<int> a, b;
int n, s, tmp, res;

void dix(int l, int r) {
    if (l == r) {
        res = l;
        return;
    } else {
        for (int i = 0; i < n; i++) {
            b[i] = a[i] + i * ((r - l) / 2);
        }
        int sum = 0, i = 0;
        while (sum + a[i] < s) {
            sum += a[i];
            i++;
        }
        if (i == n) {
            res = l;
            return;
        } else if (i > n) {
            dix((r - l) / 2, r);
        } else {
            dix(l, (r - l) / 2);
        }
    }
}

int main() {
    cin >> n >> s;
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    dix(0, n);
    cout << res;
    return 0;
}
