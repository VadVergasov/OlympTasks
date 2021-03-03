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
    int n, k, s;
    cin >> n >> k >> s;
    string field, copy;
    cin >> field;
    copy = field;
    s--;
    int cnt = 0, last = s, left = 0, right = n - 1, res = 1;
    for (int i = s; i >= 0; i--) {
        if (cnt > k && copy[i] == '#') {
            left = i + 1;
            break;
        }
        if (copy[i] == '#') {
            last = i;
        }
        copy[i] = '.';
        cnt++;
    }
    bool f = true;
    for (int i = s; i >= 0; i--) {
        if (copy[i] == '#') {
            f = false;
        }
    }
    if (copy.front() == '.' && f) {
        left = 0;
    }
    int addition = (k - s + last) / 2;
    for (int i = left; i < n; i++) {
        if (copy[i] == '#') {
            addition--;
            if (addition == -1) {
                break;
            }
        }
        res = max(res, i - left + 1);
    }
    copy = field;
    cnt = 0;
    last = s;
    for (int i = s; i < n; i++) {
        if (cnt > k && copy[i] == '#') {
            right = i - 1;
            break;
        }
        if (copy[i] == '#') {
            last = i;
        }
        copy[i] = '.';
        cnt++;
    }
    f = true;
    for (int i = s; i < n; i++) {
        if (copy[i] == '#') {
            f = false;
        }
    }
    if (copy.back() == '.' && f) {
        right = n - 1;
    }
    addition = (k - last + s) / 2;
    for (int i = right; i >= 0; i--) {
        if (copy[i] == '#') {
            addition--;
            if (addition == -1) {
                break;
            }
        }
        res = max(res, right - i + 1);
    }
    cout << res;
    return 0;
}