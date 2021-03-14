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
    int n;
    cin >> n;
    vector<pair<long long, long long> > tasks(n);
    vector<long long> q(n), t(n);
    for (auto &i : tasks) {
        cin >> i.first;
    }
    for (auto &i : q) {
        cin >> i;
    }
    for (auto &i : tasks) {
        cin >> i.second;
    }
    for (auto &i : t) {
        cin >> i;
    }
    vector<long long> dp((1 << n), 0);
    for (int i = 0; i < 1 << n; i++) {
        long long time = 0, num = 0, cur = i;
        while (cur) {
            if (cur % 2) {
                time += t[num];
            }
            cur >>= 1;
            num++;
        }
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                continue;
            }
            dp[i | (1 << j)] =
                max(dp[i | (1 << j)],
                    dp[i] + max(tasks[j].second,
                                tasks[j].first - (time + t[j]) * q[j]));
        }
    }
    cout << dp.back();
    return 0;
}
