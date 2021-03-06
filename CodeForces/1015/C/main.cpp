// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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

bool comp(int a, int b) { return a > b; }

int main() {
    unsigned long long full = 0, ziped = 0;
    int n, m, tmp1, tmp2, res = 0;
    cin >> n >> m;
    vector<int> all, zip, dif;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        all.push_back(tmp1);
        zip.push_back(tmp2);
        dif.push_back(tmp1 - tmp2);
        full += tmp1;
        ziped += tmp2;
    }
    if (ziped > m) {
        cout << -1;
        return 0;
    }
    if (full <= m) {
        cout << 0;
        return 0;
    }
    sort(dif.begin(), dif.end(), comp);
    while (full > m) {
        full -= dif[res];
        res++;
    }
    cout << res;
    return 0;
}
