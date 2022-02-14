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

vector<vector<int> > a(1002, vector<int>(1002, 0));

int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("paintbarn.in");
    ofstream out("paintbarn.out");
    in.tie(0);
    out.tie(0);
    int n, k;
    in >> n >> k;
    for (int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        in >> x1 >> y1 >> x2 >> y2;
        for (int j = min(y1, y2); j < max(y2, y1); j++) {
            a[j][min(x1, x2)]++;
            a[j][max(x1, x2)]--;
        }
    }
    long long res = 0;
    for (int i = 0; i <= 1000; i++) {
        int cur = 0;
        for (int j = 0; j <= 1000; j++) {
            cur += a[i][j];
            if (cur == k) {
                res++;
            }
        }
    }
    out << res;
    return 0;
}