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
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, c;
    cin >> n >> c;
    vector<pair<long long, char> > a(n);
    for (auto &[f, s] : a) {
        cin >> s >> f;
    }
    sort(a.rbegin(), a.rend());
    int res = 0, i1 = n - 1, i2 = n - 2;
    long long cur = 0;
    while (cur < c && i1 >= 0 && i2 >= 0) {
        res++;
    }
    cout << res;
    return 0;
}
