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
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define inf 1e18

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    iota(all(v), 1);
    set<ll> st;
    for (auto i : v) {
        st.insert(i);
    }
    ll sum = 1LL * n * (n + 1) / 2;
    if (sum % 3 == 0) {
        bool can = 1;
        sum /= 3;
        vector<vector<ll> > v(3);
        ll cur_sum = 0, cnt = 0;
        while (cur_sum < sum && cnt < 3) {
            auto it = st.upper_bound(sum - cur_sum);
            if (it != st.begin()) {
                --it;
                cur_sum += *it;
                v[cnt].push_back(*it);
                st.erase(*it);
                if (cur_sum == sum) {
                    cur_sum = 0;
                    ++cnt;
                    if (cnt == 3) {
                        break;
                    }
                }
            } else {
                can = 0;
                break;
            }
        }
        if (can) {
            cout << "Possible" << endl;
            for (int i = 0; i < 3; ++i) {
                cout << v[i].size() << endl;
                for (auto j : v[i]) {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        if (!can) {
            cout << "Impossible";
            return 0;
        }
    } else {
        cout << "Impossible";
    }
    return 0;
}