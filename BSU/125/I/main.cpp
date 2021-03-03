"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>
#define ll long long
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
using namespace std;
const int tINF = (int)INT_MAX;
const long long lINF = (long long)LLONG_MAX;
const ll MOD = (ll)1e9 + 7LL;

void f() {
    string s;
    cin >> s;
    set<char> st;
    for (auto i : s) st.insert(i);
    ll ans = 1;
    ll c = 26;
    for (int i = 0; i < (int)st.size(); ++i) {
        ans *= c;
        ans %= MOD;
        --c;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--) f();
    cerr << "Time execute: " << (double)clock() / (double)CLOCKS_PER_SEC
         << " sec" << endl;
}