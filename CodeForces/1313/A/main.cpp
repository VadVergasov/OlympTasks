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
// https://codeforces.com/contest/1313/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        vector<int> a(3), b;
        cin >> a[0] >> a[1] >> a[2];
        int res = 0;
        vector<vector<int> > pic = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}, {1, 1, 0},
                                    {1, 0, 1}, {0, 1, 1}, {1, 1, 1}};
        sort(pic.begin(), pic.end());
        do {
            int now = 0;
            b = a;
            for (int i = 0; i < pic.size(); i++) {
                bool was = true;
                for (int j = 0; j < 3; j++) {
                    if (b[j] < 1 && pic[i][j] != 0) {
                        was = false;
                    }
                    b[j] -= pic[i][j];
                }
                if (was) {
                    now++;
                }
            }
            res = max(res, now);
        } while (next_permutation(pic.begin(), pic.end()));
        cout << min(7, res) << "\n";
    }
    return 0;
}