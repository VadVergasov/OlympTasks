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
#define ll long long
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
using namespace std;
const int tINF = (int)INT_MAX;
const long long lINF = (long long)LLONG_MAX;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef DEBUG
    assert(freopen("inp", "r", stdin));
    assert(freopen("out", "w", stdout));
#else
#define cerr \
    if (false) cerr
#endif
    string s;
    cin >> s;
    ll cur = 0;
    int mod = (int)1e9 + 7;
    int pt = 0;
    vector<int> sv(3e6);
    vector<int> st;
    for (auto i : s) {
        cur *= 10;
        cur += i - '0';
        st.push_back(i - '0');
        cur %= mod;
        ++pt;
        sv[pt] = cur;
    }
    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        if (c == '+') {
            int d;
            cin >> d;
            cur *= 10;
            cur += d;
            cur %= mod;
            st.push_back(d);
            ++pt;
            sv[pt] = cur;
        } else {
            int ls = st.back();
            st.pop_back();
            pt -= 1;
            cur = sv[pt];
        }
        cout << cur << '\n';
    }

    cerr << "Time execute: " << (double)clock() / (double)CLOCKS_PER_SEC
         << " sec" << endl;
}