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
    long long n, t;
    cin >> n >> t;
    vector<long long> a(t);
    for (auto &i : a) {
        cin >> i;
    }
    vector<pair<pair<long long, long long>, long long>> girls(n);
    for (auto &[f, s] : girls) {
        cin >> f.first >> f.second >> s;
    }
    int l = 0;
    long long sum = 0;
    for (int i = 0; i < t; i++) {
        while (girls[l].first.second < i) {
            l++;
        }
        if (a[i] == 0) {
            continue;
        }
        int mx = 0;
        while () }
    return 0;
}