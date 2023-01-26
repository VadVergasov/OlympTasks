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

struct order {
    long long start, end, cost;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<order> orders(n);
    for (auto& [f, s, t] : orders) {
        cin >> f >> s >> t;
    }
    vector<order> start = orders, end = orders;
    sort(start.begin(), start.end(),
         [](const order& a, const order& b) { return a.start < b.start; });
    sort(end.begin(), end.end(),
         [](const order& a, const order& b) { return a.end < b.end; });
    vector<long long> pref_start(n + 1), pref_end(n + 1);
    for (int i = 1; i <= n; i++) {
        pref_start[i] = pref_start[i - 1] + start[i - 1].cost;
        pref_end[i] = pref_end[i - 1] + end[i - 1].end - end[i - 1].start;
    }
    int q;
    cin >> q;
    while (q--) {
        int start_time, end_time, type;
        cin >> start_time >> end_time >> type;
        if (type == 1) {
            auto first = lower_bound(start.begin(), start.end(),
                                     order{start_time, 0, 0},
                                     [](const order& a, const order& b) {
                                         return a.start < b.start;
                                     }),
                 last =
                     upper_bound(start.begin(), start.end(), order{end_time, 0, 0},
                                 [](const order& a, const order& b) {
                                     return a.start < b.start;
                                 });
            cout << pref_start[last - start.begin()] -
                        pref_start[first - start.begin()]
                 << " ";
        } else {
            auto first = lower_bound(
                     end.begin(), end.end(), order{0, start_time, 0},
                     [](const order& a, const order& b) { return a.end < b.end; }),
                 last = upper_bound(
                     end.begin(), end.end(), order{0, end_time, 0},
                     [](const order& a, const order& b) { return a.end < b.end; });
            cout << pref_end[last - end.begin()] - pref_end[first - end.begin()]
                 << " ";
        }
    }
    return 0;
}
