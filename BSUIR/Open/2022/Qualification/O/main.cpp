// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k, best = 1e9, left = 0, right = 0;
    cin >> n >> k;
    vector<pair<long long, int>> a(n);
    int cnt = 0;
    for (auto& [f, s] : a) {
        cin >> f;
        s = cnt++;
    }
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    while (l <= r) {
        int middle = (l + r) >> 1;
        int cur_ans = abs(a[middle].first - k);
        if (cur_ans < best) {
            best = cur_ans;
            left = l;
            right = r;
        }
        if (a[middle].first < k) {
            l++;
        } else if (a[middle].first > k) {
            r--;
        } else {
            break;
        }
    }
    vector<int> res;
    for (; left <= right; left++) {
        res.push_back(a[left].second + 1);
    }
    sort(res.begin(), res.end());
    cout << res.size() << '\n';
    for (auto& i : res) {
        cout << i << " ";
    }
    return 0;
}
