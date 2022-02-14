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

long long fact(int a) {
    if (a == 1 || a == 0) {
        return 1;
    }
    return fact(a - 1) * a;
}

vector<long long> a;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    a.resize(n);
    set<int> nums;
    for (int i = 0; i < n; i++) {
        nums.insert(i + 1);
    }
    long long cur = n, i = 0;
    while (k > 0) {
        long long f = 0;
        if (cur < 20) {
            f = fact(cur - 1);
        }
        if (f >= k || cur > 19 || cur == 1) {
            a[n - cur] = (*next(nums.begin(), i));
            nums.erase(a[n - cur]);
            i = 0;
            if (cur == 1) {
                break;
            }
            cur--;
        } else {
            k -= f;
            i++;
        }
    }
    cout << a[m - 1];
    return 0;
}