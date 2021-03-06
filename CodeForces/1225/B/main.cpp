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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, d, res = 100;
        cin >> n >> k >> d;
        vector<int> a(n);
        int first = 0;
        multiset<int> num;
        set<int> uniq;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (j == 0) {
                first = a[j];
            }
            num.insert(a[j]);
            uniq.insert(a[j]);
            if (j >= d - 1) {
                res = min(res, (int)uniq.size());
                num.erase(num.find(first));
                if (num.find(first) == num.end()) {
                    uniq.erase(first);
                }
                first = a[j - d + 2];
            }
        }
        /*for (int j = 0; j <= n - d; j++) {
            int count = 0;
            set<int> s;
            for (int k = 0; k < d; k++) {
                if (s.find(a[j + k]) == s.end()) {
                    s.insert(a[j + k]);
                    count++;
                }
            }
            res = min(res, count);
        }*/
        cout << res << "\n";
    }
    return 0;
}