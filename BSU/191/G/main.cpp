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

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    vector<pair<int, vector<long long>>> a(k, {0, vector<long long>()});
    int cur = 1;
    for (auto& [f, s] : a) {
        int sz;
        cin >> sz;
        s.resize(sz);
        for (auto& j : s) {
            cin >> j;
        }
        f = cur;
        cur++;
        sort(s.begin(), s.end());
    }
    sort(a.begin(), a.end(),
         [&](const pair<int, vector<long long>>& first,
             const pair<int, vector<long long>>& second) {
             return first.second.size() < second.second.size();
         });
    for (int clr1 = 0; clr1 < k; clr1++) {
        for (int clr2 = clr1 + 1; clr2 < k; clr2++) {
            for (int clr3 = clr2 + 1; clr3 < k; clr3++) {
                bool cont = true;
                for (const auto& first : a[clr1].second) {
                    if (!cont) {
                        break;
                    }
                    for (const auto& second : a[clr2].second) {
                        auto third =
                            lower_bound(a[clr3].second.begin(),
                                        a[clr3].second.end(), first + second);
                        if (third == a[clr3].second.begin()) {
                            cont = false;
                            break;
                        }
                        third--;
                        if (first + *third <= second) {
                            break;
                        }
                        if (second + *third <= first) {
                            continue;
                        }
                        cout << a[clr1].first << " " << first << " "
                             << a[clr2].first << " " << second << " "
                             << a[clr3].first << " " << *third;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1;
    return 0;
}
