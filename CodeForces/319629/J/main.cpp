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

#pragma GCC optimize("Ofast,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    pair<int, int> mnx = {1e9, 0}, mny = {1e9, 0}, mxx = {-1e9, 0},
                   mxy = {-1e9, 0};
    cin >> n;
    vector<pair<int, int> > dots(n);
    for (int i = 0; i < n; i++) {
        cin >> dots[i].first >> dots[i].second;
        if (mnx.first > dots[i].first) {
            mnx.first = dots[i].first;
            mnx.second = i + 1;
        }
        if (mxx.first < dots[i].first) {
            mxx.first = dots[i].first;
            mxx.second = i + 1;
        }
        if (mny.first > dots[i].second) {
            mny.first = dots[i].second;
            mny.second = i + 1;
        }
        if (mxy.first < dots[i].second) {
            mxy.first = dots[i].second;
            mxy.second = i + 1;
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x2 == x1) {
            if (mnx.first < x1 && mxx.first > x1) {
                cout << mnx.second << " " << mxx.second << "\n";
            } else {
                cout << "0\n";
            }
            continue;
        }
        long double k = ((long double)y2 - (long double)y1) /
                        ((long double)x2 - (long double)x1),
                    b = (long double)y1 - k * (long double)x1;
        bool lower = false, bigger = false;
        int ans1 = 0, ans2 = 0;
        for (int j = 0; j < n; j++) {
            long double x = dots[j].first, y = dots[j].second,
                        cur_b = y - k * x;
            if (abs(cur_b - b) <= 1e-9) {
                continue;
            }
            if (!lower && cur_b < b) {
                lower = true;
                ans1 = j + 1;
            }
            if (!bigger && cur_b > b) {
                bigger = true;
                ans2 = j + 1;
            }
            if (lower && bigger) {
                break;
            }
        }
        if (lower && bigger) {
            cout << ans1 << ' ' << ans2 << '\n';
        } else {
            cout << "0\n";
        }
    }
    return 0;
}
