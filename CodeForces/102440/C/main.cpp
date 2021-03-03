"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>
const long double EPS = 1e-9;
using namespace std;

int main() {
    vector<long double> ar(3);
    for (auto &i : ar) cin >> i;
    sort(ar.begin(), ar.end());
    bool ans = 0;

    do {
        //   cout << ar[2] - ar[1] << '\n';
        if (ar[2] - ar[1] == ar[0]) {
            ans = 1;
            break;
        }
    } while (next_permutation(ar.begin(), ar.end()));
    if (ans)
        for (auto i : ar) cout << fixed << setprecision(0) << i << " ";

    else {
        cout << "-1 -1 -1\n";
    }

    return 0;
}