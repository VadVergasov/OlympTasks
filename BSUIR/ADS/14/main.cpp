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

int binpow(int n, int p) {
    int res = 1;
    while (p) {
        if (p & 1) {
            res *= n;
        }
        n *= n;
        p >>= 1;
    }
    return res;
}

int main() {
    int n, n1;
    cin >> n;
    n1 = n;
    vector<short> nums;
    while (n) {
        nums.push_back(n % 10);
        n /= 10;
    }
    reverse(nums.begin(), nums.end());
    next_permutation(nums.begin(), nums.end());
    n = 0;
    for (int i = 0; i < nums.size(); i++) {
        int t = binpow(10, (int)nums.size() - i - 1);
        n += nums[i] * t;
    }
    if (n <= n1) {
        cout << -1;
    } else {
        cout << n;
    }
    return 0;
}