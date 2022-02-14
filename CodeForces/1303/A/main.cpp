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
// https://codeforces.com/contest/1303/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        string s;
        cin >> s;
        bool was = false;
        vector<int> num;
        int cur = 0, res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' && was) {
                cur++;
            } else if (s[i] == '1') {
                was = true;
                res += cur;
                cur = 0;
            }
        }
        cout << res << "\n";
    }
    return 0;
}