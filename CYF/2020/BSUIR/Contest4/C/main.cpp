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

vector<int> nums = {0, 1, 4, 6, 8, 9};

long long count(long long num, long long l, long long r) {
    if (num > r) {
        return 0;
    }
    bool p = false;
    for (long long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            p = true;
            break;
        }
    }
    int cur = num;
    bool look = false;
    while (cur) {
        if (look && cur % 10 == 1) {
            p = false;
            break;
        }
        if (cur % 10 == 1 || cur % 10 == 9) {
            look = true;
        }
        cur /= 10;
    }
    string s = to_string(num);
    look = false;
    for (int i = 0; i < s.size(); i++) {
        if (look && s[i] == '1') {
            p = false;
        }
        if (s[i] == '4' || s[i] == '6') {
            look = true;
        }
    }
    if (!p && num != 1) {
        return 0;
    }
    long long res = 0;
    if (num <= r && num >= l) {
        res++;
    }
    for (int i = 0; i < nums.size(); i++) {
        res += count(num * 10 + nums[i], l, r);
    }
    return res;
}

int main() {
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long l, r;
        cin >> l >> r;
        long long res = count(1, l, r) + count(4, l, r) + count(6, l, r) +
                        count(8, l, r) + count(9, l, r);
        cout << res << "\n";
    }
    return 0;
}