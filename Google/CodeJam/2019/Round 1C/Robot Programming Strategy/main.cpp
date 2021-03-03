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
    for (int i = 0; i < t; i++) {
        string ans = "";
        bool res = true;
        int a, mx = 0;
        cin >> a;
        vector<string> c(a);
        for (int j = 0; j < a; j++) {
            cin >> c[j];
            mx = max(mx, (int)c[j].size());
        }
        set<int> beat;
        int j = 0;
        while (beat.size() != a) {
            bool rock = false, scissors = false, paper = false;
            for (int k = 0; k < a; k++) {
                if (ans.size() > 0 &&
                        ans.back() != c[k][(j - 1) % c[k].size()] ||
                    beat.find(k) != beat.end()) {
                    beat.insert(k);
                    continue;
                }
                if (c[k][j % c[k].size()] == 'R') {
                    rock = true;
                } else if (c[k][j % c[k].size()] == 'S') {
                    scissors = true;
                } else {
                    paper = true;
                }
            }
            if ((int)(rock) + (int)(scissors) + (int)(paper) > 2) {
                cout << "Case #" << i + 1 << ": IMPOSSIBLE\n";
                res = false;
                break;
            } else if ((int)(rock) + (int)(scissors) + (int)(paper) < 2) {
                if (rock) {
                    ans += "P";
                } else if (paper) {
                    ans += "S";
                } else if (scissors) {
                    ans += "R";
                }
            } else {
                if (rock && paper) {
                    ans += "P";
                } else if (rock && scissors) {
                    ans += "R";
                } else if (paper && scissors) {
                    ans += "S";
                }
            }
            j++;
        }
        if (res) {
            cout << "Case #" << i + 1 << ": " << ans << "\n";
        }
    }
    return 0;
}