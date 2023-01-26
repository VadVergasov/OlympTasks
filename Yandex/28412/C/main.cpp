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
    int n, k, mx = 0;
    cin >> n >> k;
    vector<pair<int, int> > a(n);
    vector<long long> res(n), sum(1, 0);
    sum.reserve(n + 1);
    int counter = 1;
    for (auto& [f, s] : a) {
        cin >> f;
        mx = max(mx, f);
        s = counter;
        counter++;
    }
    sort(begin(a), end(a));
    for (const auto& [f, s] : a) {
        sum.push_back(sum.back() + f);
    }
    for (int i = 0; i < n; i++) {
        int left = 0, right = mx;
        while (true) {
            int mid = (left + right) >> 1;
            size_t left_low_border = distance(
                       begin(a), lower_bound(begin(a), end(a),
                                             make_pair(a[i].first - mid, 0))),
                   left_up_border = distance(
                       begin(a),
                       upper_bound(begin(a), end(a),
                                   make_pair(a[i].first - mid, 1'000'000'000))),
                   right_low_border = distance(
                       begin(a), lower_bound(begin(a), end(a),
                                             make_pair(a[i].first + mid, 0))),
                   right_up_border = distance(
                       begin(a),
                       upper_bound(begin(a), end(a),
                                   make_pair(a[i].first + mid, 1'000'000'000)));
            cout << left_low_border << " " << left_up_border << " "
                 << right_low_border << " " << right_up_border << endl;
            if (right_up_border - left_low_border >= k + 1 &&
                right_low_border - left_up_border <= k + 1) {
                size_t cur = distance(
                    begin(a), lower_bound(begin(a), end(a),
                                          make_pair(a[i].first, a[i].second)));
                break;
            } else if (right_low_border - left_up_border > k + 1) {
                right = mid + 1;
            } else {
                left = mid - 1;
            }
        }
    }
    return 0;
}
