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

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<set<int>, map<int, int> > mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        map<int, int> div, t;
        set<int> uni;
        while (a[i] % 2 == 0) {
            div[2]++;
            a[i] /= 2;
        }
        for (int j = 3; j <= sqrt(a[i]); j += 2) {
            while (a[i] % j == 0) {
                div[j]++;
            }
        }
        for (auto j : div) {
            uni.insert(j.first);
        }
        t = mp[uni];
        for (auto j : t) {
            j.second += div[j.first];
        }
    }
    return 0;
}