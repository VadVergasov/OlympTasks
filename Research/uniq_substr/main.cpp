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

#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s = "";
    int n, p = 31;
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        s += ('a' + rand() % 26);
    }
    double start = clock();
    gp_hash_table<unsigned long long, int> mp;
    vector<unsigned long long> hashes(n + 1, 0), pws(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        pws[i] = pws[i - 1] * p;
    }
    for (int i = 0; i < n; i++) {
        hashes[i + 1] = hashes[i] + pws[i] * (s[i] - 'a' + 1);
    }
    pws[n] = pws[n - 1] * p;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            unsigned long long hsh = (hashes[i + j] - hashes[i]) * pws[n - i];
            mp[hsh]++;
        }
    }
    cout << "Res map: " << mp.size() << "\nMap time: ";
    double end = clock();
    cout << fixed << setprecision(3) << (end - start) / CLOCKS_PER_SEC << "\n";
    return 0;
}
