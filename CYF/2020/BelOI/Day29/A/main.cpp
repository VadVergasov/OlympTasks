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
    ifstream in("onlyone.in");
    ofstream out("onlyone.out");
    int n;
    in >> n;
    vector<tuple<int, int, int> > a(n);
    for (auto &i : a) {
        in >> get<0>(i) >> get<1>(i) >> get<2>(i);
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool f = (get<0>(a[i]) == get<0>(a[j])),
                 s = (get<1>(a[i]) == get<1>(a[j])),
                 t = (get<2>(a[i]) == get<2>(a[j]));
            if ((f && !s && !t) || (!f && s && !t) || (!f && !s && t)) {
                res++;
            }
        }
    }
    out << res;
    return 0;
}