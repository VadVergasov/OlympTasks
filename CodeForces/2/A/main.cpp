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

string s[1001];
int a, n, x[1001];
map<string, int> p, t;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> x[i];
        p[s[i]] += x[i];
    }
    for (int i = 0; i < n; i++) {
        a = max(a, p[s[i]]);
    }
    int i = 0;
    while (p[s[i]] < a || (t[s[i]] += x[i]) < a) {
        i++;
    }
    cout << s[i];
    return 0;
}
