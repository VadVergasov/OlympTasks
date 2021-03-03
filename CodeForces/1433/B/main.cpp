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
    while (t--) {
        int n, count = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
            if (i == 1) {
                count++;
            }
        }
        if (count == 1) {
            cout << "0\n";
        } else {
            int res = 1e6;
            for (int i = 0; i < n; i++) {
                vector<int> a1 = a;
                int cnt = 0;
                for (int j = 0; j <= i; j++) {
                    if (a1[j] == 1) {
                        for (int k = j; k <= i; k++) {
                            if (a1[k] == 0) {
                                cnt++;
                                a1[k] = 1;
                                a1[j] = 0;
                                break;
                            }
                        }
                    }
                }
                for (int j = n - 1; j >= i; j--) {
                    if (a1[j] == 1) {
                        for (int k = j; k >= i; k--) {
                            if (a1[k] == 0) {
                                cnt++;
                                a1[k] = 1;
                                a1[j] = 0;
                                break;
                            }
                        }
                    }
                }
                res = min(res, cnt);
            }
            cout << res << "\n";
        }
    }
    return 0;
}
