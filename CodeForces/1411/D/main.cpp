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
    string s;
    cin >> s;
    long long x, y, n = s.size(), added_ones = 0, added_zeros = 0;
    vector<long long> zeros(n), ones(n);
    cin >> x >> y;
    for (long long i = 0; i < n; i++) {
        if (i) {
            zeros[i] = zeros[i - 1];
            ones[i] = ones[i - 1];
        }
        if (s[i] == '0') {
            zeros[i]++;
        } else if (s[i] == '1') {
            ones[i]++;
        }
    }
    long long res = 0;
    for (long long i = 0; i < n; i++) {
        if (s[i] == '?') {
            if ((zeros.back() - zeros[i]) * y + (zeros[i] + added_zeros) * x <
                (ones.back() - ones[i]) * x + (ones[i] + added_ones) * y) {
                s[i] = '1';
                added_ones++;
            } else {
                s[i] = '0';
                added_zeros++;
            }
        }
    }
    zeros[0] = 0;
    ones[0] = 0;
    for (long long i = 0; i < n; i++) {
        if (i) {
            zeros[i] = zeros[i - 1];
            ones[i] = ones[i - 1];
        }
        if (s[i] == '0') {
            zeros[i]++;
        } else if (s[i] == '1') {
            ones[i]++;
        }
    }
    for (long long i = 0; i < n; i++) {
        if (s[i] == '0') {
            res += (ones.back() - ones[i]) * x;
        } else {
            res += (zeros.back() - zeros[i]) * y;
        }
    }
    cout << res;
    return 0;
}
