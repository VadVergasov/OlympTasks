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
// https://codeforces.com/contest/1328/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, cur = 1, first, second;
        cin >> n >> k;
        int cnt = 1;
        first = n - 2;
        second = n - 1;
        while (cur + cnt <= k) {
            first--;
            cur += cnt;
            cnt++;
        }
        while (cur + 1 <= k && second - 1 > first) {
            cur++;
            second--;
        }
        if (cur + 1 == k) {
            first--;
        }
        // cout << first << " " << second << "\n";
        string res = "";
        for (int i = 0; i < n; i++) {
            res += "a";
        }
        res[first] = 'b';
        res[second] = 'b';
        cout << res << "\n";
    }
    return 0;
}