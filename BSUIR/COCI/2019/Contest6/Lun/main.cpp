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
    int n;
    cin >> n;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    if (s.front() == 'x') {
        long long sum = 0;
        for (int i = 1; i < n; i++) {
            int cur = s[i] - '0';
            if ((i - 1) % 2 == 0) {
                cur <<= 1;
            }
            if (cur > 9) {
                cur = cur / 10 + cur % 10;
            }
            sum += cur;
        }
        cout << (sum * 9) % 10;
    } else {
        long long sum = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == 'x') {
                continue;
            }
            int cur = s[i] - '0';
            if ((i - 1) % 2 == 0) {
                cur <<= 1;
            }
            if (cur > 9) {
                cur = cur / 10 + cur % 10;
            }
            sum += cur;
        }
        int res = 0;
        while ((sum + res) * 9 % 10 != s.front() - '0') {
            res++;
        }
        cout << res;
    }
    return 0;
}