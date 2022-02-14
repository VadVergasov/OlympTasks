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
    string test = "b_small";
    ifstream cin(test + ".in");
    ofstream cout(test + ".out");
    int n, m;
    cin >> m >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> res;
    n--;
    while (m > 1e6) {
        res.push_back(n);
        m -= a[n];
        n--;
    }
    n++;
    vector<bool> dp(m + 1);
    vector<int> p(m + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i) {
        for (int j = m; j >= a[i]; --j) {
            if (!dp[j] && dp[j - a[i]]) {
                dp[j] = true;
                p[j] = i;
            }
        }
    }
    for (int i = m; i > 0; i--) {
        if (dp[i]) {
            res.push_back(p[i]);
            i -= a[p[i]] - 1;
        }
    }
    cout << res.size() << "\n";
    sort(res.begin(), res.end());
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}