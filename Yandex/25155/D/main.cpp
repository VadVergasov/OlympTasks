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

#pragma GCC optimize("Ofast,unroll-loops")

using namespace std;

const unsigned long long p = 31;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    set<char> u;
    for (auto i : s) {
        u.insert(i);
    }
    if (u.size() == 1) {
        cout << s.size();
        return 0;
    }
    int n = s.size();
    vector<unsigned long long> hashes(n + 1), pp(n + 10, 1);
    for (int i = 1; i < n + 10; i++) {
        pp[i] = pp[i - 1] * p;
    }
    for (int i = 0; i < n; i++) {
        hashes[i + 1] = hashes[i] + pp[i] * (s[i] - 'A' + 1);
    }
    int l = 1, r = n;
    while (l < r) {
        int k = (l + r) >> 1;
        unordered_map<unsigned long long, int> mp;
        bool f = true;
        for (int i = 0; i <= n - k; i++) {
            unsigned long long substr =
                (hashes[i + k] - hashes[i]) * pp[n + 2 - i];
            mp[substr]++;
            if (mp[substr] > 1) {
                f = false;
                break;
            }
        }
        if (f) {
            r = k;
        } else {
            l = k + 1;
        }
    }
    cout << l;
    return 0;
}
