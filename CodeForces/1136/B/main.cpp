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

using namespace std;

int main() {
    long long res = 0;
    int n, k, cur;
    cin >> n >> k;
    cur = k - 1;
    vector<int> mp(n, 1);
    if (k > n / 2) {
        while (cur < n) {
            while (mp[cur] > 0) {
                if (cur == n - 1) {
                    mp[cur - 1]++;
                } else {
                    mp[cur - 1]++;
                }
                mp[cur]--;
                res++;
            }
            res += 2;
            cur++;
        }
        cur -= 2;
        while (cur > k - 2) {
            cur--;
            res++;
        }
        while (cur >= 0) {
            while (mp[cur] > 0) {
                mp[cur + 1]++;
                mp[cur]--;
                res++;
            }
            cur--;
            res += 2;
        }
    } else {
        while (cur >= 0) {
            while (mp[cur] > 0) {
                if (cur == 0) {
                    mp[cur + 1]++;
                } else {
                    mp[cur + 1]++;
                }
                mp[cur]--;
                res++;
            }
            cur--;
            res += 2;
        }
        cur += 2;
        while (cur < k) {
            cur++;
            res++;
        }
        while (cur < n) {
            while (mp[cur] > 0) {
                mp[cur - 1]++;
                mp[cur]--;
                res++;
            }
            cur++;
            res += 2;
        }
    }
    cout << res - 1;
    return 0;
}