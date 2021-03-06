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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string s, s1;
    cin >> n >> s;
    s1 = s;
    sort(s1.begin(), s1.end());
    if (s1 == s) {
        cout << "NO";
        return 0;
    }
    int mx = 0, pos = 0;
    for (int i = 0; i < s.size(); i++) {
        mx = max(mx, (int)s[i]);
        if (mx == (int)s[i]) {
            pos = i;
        }
        if (s[i] < mx) {
            cout << "YES" << endl << pos + 1 << " " << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}