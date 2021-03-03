"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<pair<int, int> > a(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            a[i] = {x, y};
        }
        sort(a.begin(), a.end());
        int x = 0, y = 0, cur = 0;
        bool res = true;
        string r = "";
        while ((x <= a.back().first || y <= a.back().second) && cur < n) {
            if (x > a[cur].first || y > a[cur].second) {
                res = false;
                break;
            }
            if (x < a[cur].first) {
                x++;
                r += "R";
            } else if (y < a[cur].second) {
                y++;
                r += "U";
            } else {
                cur++;
            }
        }
        if (!res) {
            cout << "NO\n";
        } else {
            cout << "YES\n" << r << "\n";
        }
    }
    return 0;
}