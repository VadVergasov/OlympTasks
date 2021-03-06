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
// https://codeforces.com/contest/1335/problem/D
#include <bits/stdc++.h>

using namespace std;

const vector<pair<int, int> > f = {{0, 0}, {1, 3}, {2, 6}, {3, 1}, {4, 4},
                                   {5, 7}, {6, 2}, {7, 5}, {8, 8}};

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > a(9, vector<int>(9));
        for (auto &i : a) {
            for (auto &j : i) {
                char t;
                cin >> t;
                j = t - '0';
            }
        }
        for (auto [f, s] : f) {
            if (a[f][s] == 1) {
                a[f][s] = 2;
            } else {
                a[f][s] = 1;
            }
        }
        for (auto i : a) {
            for (auto j : i) {
                cout << j;
            }
            cout << "\n";
        }
    }
    return 0;
}