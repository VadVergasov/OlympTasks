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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        set<int> st;
        for (int i = 1; i < n; i++) {
            st.insert(a[i] - a[i - 1]);
        }
        if (st.size() > 2) {
            cout << "-1\n";
        } else if (st.size() == 2) {
            long long m = *st.rbegin() - *st.begin();
            bool f = true;
            int cur = a[0] % m;
            if (cur != a[0]) {
                f = false;
            }
            for (int i = 1; i < n && f; i++) {
                cur += *st.rbegin();
                cur %= m;
                if (cur != a[i]) {
                    f = false;
                    break;
                }
            }
            if (f) {
                cout << m << " " << *st.rbegin() << "\n";
            } else {
                cout << "-1\n";
            }
        } else {
            cout << "0\n";
        }
    }
    return 0;
}
