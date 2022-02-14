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

int main() {
    int n;
    cin >> n;
    vector<int> a(n), mn(n), mx(n);
    for (auto &i : a) {
        cin >> i;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n; j >= i; j--) {
            if (j - i == 0) {
                res++;
                break;
            }
            int mn = 1e9, mx = 0;
            for (int k = i; k < j; k++) {
                mn = min(mn, a[k]);
                mx = max(mx, a[k]);
            }
            if (mn == a[i] && mx == a[j - 1]) {
                // cout << i << " " << j << " " << mn << " " << mx << endl;
                res++;
                i = j - 1;
                break;
            }
        }
    }
    cout << res;
    // mn[0] = a[0];
    // mx[0] = a[0];
    // for (int i = 1; i < n; i++) {
    //     mx[i] = max(mx[i - 1], a[i]);
    //     mn[i] = min(mn[i - 1], a[i]);
    // }
    // // for (auto i : mn) {
    // //     cout << i << " ";
    // // }
    // // cout << endl;
    // // for (auto i : mx) {
    // //     cout << i << " ";
    // // }
    // // cout << endl;
    // long long res = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = n - 1; j >= i; j--) {
    //         if (j - i == 0) {
    //             res++;
    //             j = -1;
    //             continue;
    //         }
    //         if (a[i] == mn[i] && a[j] == mx[j] && mn[j] >= mn[i]) {
    //             // cout << i << " " << j << endl;
    //             res++;
    //             i = j;
    //             break;
    //         }
    //     }
    // }
    // cout << res;
    return 0;
}