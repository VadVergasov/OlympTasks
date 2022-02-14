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
// https://codeforces.com/problemset/problem/1307/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<long long> f(26);
    vector<vector<long long> > sec(26, vector<long long>(26));
    for (long long i = 0; i < s.size(); i++) {
        for (long long j = 0; j < 26; j++) {
            sec[j][s[i] - 'a'] += f[j];
        }
        f[s[i] - 'a']++;
    }
    long long mx = 0;
    for (long long i = 0; i < 26; i++) {
        mx = max(mx, f[i]);
        for (long long j = 0; j < 26; j++) {
            mx = max(mx, sec[i][j]);
        }
    }
    cout << mx;
    return 0;
}