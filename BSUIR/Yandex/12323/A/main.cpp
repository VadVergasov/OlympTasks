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
    ifstream in("video.in");
    ofstream out("video.out");
    in.tie(0);
    out.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, res = 0;
    in >> n >> m;
    vector<vector<char> > a(n, vector<char>(m)), b;
    vector<char> last;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> a[i][j];
        }
    }
    b = a;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int z = 0; z < i; z++) {
                last = b[0];
                for (int k = 1; k < n; k++) {
                    swap(b[k], last);
                }
                b[0] = last;
            }
            for (int z = 0; z < j; z++) {
                last.clear();
                for (int k = 0; k < n; k++) {
                    last.push_back(b[k][0]);
                }
                for (int k = 1; k < m; k++) {
                    for (int q = 0; q < n; q++) {
                        swap(b[q][k], last[q]);
                    }
                }
                for (int k = 0; k < n; k++) {
                    swap(b[k][0], last[k]);
                }
            }
            int cur = 0;
            for (int k = 0; k < n - 1; k++) {
                for (int z = 0; z < m - 1; z++) {
                    if (b[k][z] == b[k + 1][z] && b[k][z] == b[k][z + 1] &&
                        b[k][z] == b[k + 1][z + 1]) {
                        cur++;
                    }
                }
            }
            res = max(res, cur);
            b = a;
        }
    }
    out << res;
    return 0;
}