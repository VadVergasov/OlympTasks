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
        long long last_valid = 0, cur = 1, balance = 1;
        while (true) {
            cout << "? " << cur << endl;
            string s;
            cin >> s;
            if (s == "Lucky!") {
                last_valid = cur;
                balance += cur;
                cur <<= 1;
            } else if (s == "Fraudster!") {
                balance -= cur;
                break;
            } else {
                return 1;
            }
        }
        long long l = last_valid, r = cur - 1;
        while (l < r) {
            long long m = ((l + r) << 1) / 4;
            while (balance < m) {
                cout << "? " << last_valid << endl;
                string s;
                cin >> s;
                balance += last_valid;
            }
            cout << "? " << m << endl;
            string s;
            cin >> s;
            if (s == "Lucky!") {
                last_valid = m;
                l = m;
                balance += m;
            } else if (s == "Fraudster!") {
                balance -= m;
                r = m - 1;
            } else {
                return 1;
            }
        }
        cout << "! " << last_valid << endl;
    }
    return 0;
}
