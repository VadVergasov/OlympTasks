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

const vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main() {
    srand(time(NULL));
    for (int q = 2; q <= 10; q++) {
        cout << q << '\n';
        ifstream in("input" + to_string(q) + ".txt");
        ofstream out("output" + to_string(q) + ".txt");
        in.tie(0);
        out.tie(0);
        int t;
        in >> t;
        int n, m, k, s;
        in >> n >> m >> k >> s;
        vector<vector<int>> a(n + 2, vector<int>(m + 2, -1)),
            res(n, vector<int>(m, 0));
        set<pair<int, pair<int, int>>> nums;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                in >> a[i][j];
                nums.insert({a[i][j], {i, j}});
            }
        }
        for (int i = 0; i < k; i++) {
        }
        for (auto i : res) {
            for (auto j : i) {
                out << j << ' ';
            }
            out << '\n';
        }
    }
    return 0;
}
