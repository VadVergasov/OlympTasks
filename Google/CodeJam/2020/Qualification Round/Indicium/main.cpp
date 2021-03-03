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
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        int n, k;
        cin >> n >> k;
        cout << "Case #" << cur << ": ";
        if (k % n == 0) {
            cout << "POSSIBLE\n";
            vector<int> start(n);
            iota(begin(start), end(start), 1);
            rotate(begin(start), begin(start) + k / n - 1, end(start));
            for (auto i : start) {
                cout << i << " ";
            }
            cout << endl;
            for (int i = 1; i < n; i++) {
                rotate(begin(start), end(start) + 1, end(start));
                for (auto j : start) {
                    cout << j << " ";
                }
                cout << endl;
            }
        } else if (n * (n + 1) / 2 == k) {
            cout << "POSSIBLE\n";
            vector<int> start(n);
            iota(begin(start), end(start), 1);
            for (auto i : start) {
                cout << i << " ";
            }
            cout << endl;
            for (int i = 1; i < n; i++) {
                rotate(begin(start), begin(start) + 1, end(start));
                for (auto j : start) {
                    cout << j << " ";
                }
                cout << endl;
            }
        } else {
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}