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

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("tune=native")

using namespace std;

struct pp {
    int first, second;
};

inline bool operator<(const pp &a, const pp &b) {
    double f = (double)(1 << a.first) / (double)(1 << b.first),
           s = log((double)b.second) / log((double)a.second);
    return f < s;
}

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> res;
    vector<bool> p(1e7, true);
    res.reserve(1e6);
    p[0] = 0;
    p[1] = 0;
    set<pp> nums;
    nums.insert({0, 2});
    for (int i = 3; i < 10000; i += 2) {
        if (p[i]) {
            nums.insert({0, i});
            for (int j = i * i; j < 1e7; j += i) {
                p[j] = 0;
            }
        }
    }
    for (int i = 1e4 + 1; i < 6e6; i += 2) {
        if (p[i]) {
            nums.insert({0, i});
        }
    }
    int cnt = 0;
    while (cnt < n) {
        pp cur = *nums.begin();
        nums.erase(nums.begin());
        for (int i = 0; i < (1 << cur.first); i++) {
            res.push_back(cur.second);
        }
        cur.first++;
        nums.insert(cur);
        cnt++;
    }
    sort(res.begin(), res.end());
    cout << res.size() << '\n';
    for (const auto &i : res) {
        cout << i << ' ';
    }
    return 0;
}
