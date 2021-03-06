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
    vector<pair<int, int> > a;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        a.push_back(make_pair(t1, t2));
    }
    ans.push_back(1);
    for (int i = 0; i < n; i += 3) {
        int it = ans[i] - 1;
        int f = a[it].first - 1, s = a[it].second - 1;
        if (a[f].first == s + 1 || a[f].second == s + 1) {
            ans.push_back(f + 1);
            ans.push_back(s + 1);
            if (a[f].first == s + 1) {
                ans.push_back(a[f].second);
            } else {
                ans.push_back(a[f].first);
            }
        } else {
            ans.push_back(s + 1);
            ans.push_back(f + 1);
            if (a[s].first == f + 1) {
                ans.push_back(a[s].second);
            } else {
                ans.push_back(a[s].first);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
