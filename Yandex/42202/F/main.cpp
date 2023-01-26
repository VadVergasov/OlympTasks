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

using namespace std;

/*
001 - 011
011 - 001
110 - 100
100 - 110
*/

int main() {
    const string neutral[] = {"000", "010", "101", "111"};
    const string sub[] = {"110", "011"};
    const string add[] = {"001", "100"};
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int ones = 0;
        for (const auto& cur : s) {
            if (cur == '1') {
                ones++;
            }
        }
        if (ones > b) {
            bool f = true;
            int count = abs(ones - b);
            vector<int> res;
            res.reserve(count);
            while (count--) {
                int pos = s.find(sub[0]);
                if (pos != -1) {
                    s[pos + 1] = '0';
                    res.push_back(pos + 2);
                } else if (s.find(sub[1]) != -1) {
                    pos = s.find(sub[1]);
                    s[pos + 1] = '0';
                    res.push_back(pos + 2);
                } else {
                    cout << "-1\n";
                    f = false;
                    break;
                }
            }
            if (!f) {
                continue;
            }
            reverse(res.end(), res.begin());
            cout << s << '\n';
            for (const auto& cur : res) {
                cout << cur << ' ';
            }
            cout << '\n';
        } else if (ones < b) {
            bool f = true;
            int count = abs(ones - b);
            vector<int> res;
            res.reserve(count);
            while (count--) {
                int pos = s.find(add[0]);
                if (pos != -1) {
                    s[pos + 1] = '1';
                    res.push_back(pos + 2);
                } else if (s.find(add[1]) != -1) {
                    pos = s.find(add[1]);
                    s[pos + 1] = '1';
                    res.push_back(pos + 2);
                } else {
                    cout << "-1\n";
                    f = false;
                    break;
                }
            }
            if (!f) {
                continue;
            }
            reverse(res.end(), res.begin());
            cout << s << '\n';
            for (const auto& cur : res) {
                cout << cur << ' ';
            }
            cout << '\n';
        } else {
            int res = -1, cur = 0;
            while (res == -1) {
                res = s.find(neutral[cur]);
                cur++;
            }
            cout << s << '\n';
            for (int j = 0; j < c; j++) {
                cout << res + 2 << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
