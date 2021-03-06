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
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    if (p == 1) {
        for (int i = 0; i < n; i++) {
            vector<pair<int, int> > b;
            b.push_back({a[i], i});
            for (int j = 1; j < n - i; j++) {
                b.push_back({a[i + j] + j, i + j});
            }
            for (int j = 1; j <= i; j++) {
                b.push_back({a[i - j] + j, i - j});
            }
            sort(b.begin(), b.end());
            for (int j = 0; j < b.size(); j++) {
                if (b[j].first == a[i]) {
                    cout << j + 1 << '\n';
                    break;
                }
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            vector<pair<int, int> > b;
            int to_find = 0;

            int res = 0;
            for (int j = n - 1; j >= 0; j--) {
                if (j == i) {
                    to_find = a[j] + n - j - 1;
                }
                b.push_back({a[j] + n - j - 1, j});
            }
            sort(b.begin(), b.end());
            for (int j = 0; j < b.size(); j++) {
                if (b[j].first == to_find) {
                    res = max(res, j + 1);
                    break;
                }
            }
            b.clear();
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    to_find = a[j] + j;
                }
                b.push_back({a[j] + j, j});
            }
            sort(b.begin(), b.end());
            for (int j = 0; j < b.size(); j++) {
                if (b[j].first == to_find) {
                    res = max(res, j + 1);
                    break;
                }
            }
            cout << res << "\n";
        }
    }
    return 0;
}