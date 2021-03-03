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
// https://codeforces.com/problemset/problem/1303/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n, m;
        cin >> n >> m;
        vector<int> b(60);
        long long sum = 0;
        for (int i = 0; i < m; i++) {
            int t;
            cin >> t;
            sum += t;
            b[log2(t)]++;
        }
        if (sum < n) {
            cout << "-1\n";
            continue;
        }
        int i = 0, res = 0;
        while (i < 60) {
            if (((1LL << i) & n) != 0) {
                if (b[i] > 0) {
                    b[i]--;
                } else {
                    while (i < 60 && b[i] == 0) {
                        i++;
                        res++;
                    }
                    b[i]--;
                    continue;
                }
            }
            b[i + 1] += b[i] / 2;
            i++;
        }
        cout << res << "\n";
    }
    return 0;
}