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

long long binpow(int n, int p, int m) {
    long long ans = 1;
    while (p) {
        cout << p;
        if (p & 1) {
            ans *= n;
            ans %= m;
        }
        p /= 2;
        n *= n;
        n %= m;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long res = 0;
        int l, m;
        cin >> l >> m;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.find(s2) != -1 || s2.find(s1) != -1) {
            res += binpow(26, l - s1.size() - s2.size(), m) +
                   binpow(26, l - max(s1.size(), s2.size()), m);
            cout << res << "\n";
            continue;
        }
        if (s1.size() + s2.size() < l) {
            res += 2 * binpow(26, l - s1.size() - s2.size(), m);
            res %= m;
        }
        cout << res << "\n";
    }
    return 0;
}