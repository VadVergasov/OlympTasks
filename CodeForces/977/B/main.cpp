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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> t;
    vector<int> num;
    for (int i = 0; i < n - 1; i++) {
        string u;
        u += s[i];
        u += s[i + 1];
        t.push_back(u);
        num.push_back(0);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < t.size(); j++) {
            string u;
            u += s[i];
            u += s[i + 1];
            if (u == t[j]) {
                num[j]++;
            }
        }
    }
    int mx = 0;
    for (int i = 0; i < num.size(); i++) {
        mx = max(mx, num[i]);
    }
    for (int i = 0; i < num.size(); i++) {
        if (mx == num[i]) {
            cout << t[i];
            break;
        }
    }
    return 0;
}
