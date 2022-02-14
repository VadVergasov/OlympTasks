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
// https://codeforces.com/contest/1315/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    for (auto &i : a) {
        cin >> i.first;
    }
    for (auto &i : a) {
        cin >> i.second;
    }
    sort(a.begin(), a.end());
    long long res = 0, sum = 0, last = a.front().first;
    multiset<int> nums;
    nums.insert(a.front().second);
    sum = a.front().second;
    int i = 1;
    while (i < n) {
        if (last != a[i].first) {
            sum -= (*--nums.end());
            res += sum;
            nums.erase(--nums.end());
            if (last + 1 != a[i].first) {
                nums.clear();
                sum = 0;
            }
            last = a[i].first;
        }
        nums.insert(a[i].second);
        sum += a[i].second;
        i++;
    }
    int c = 1;
    for (auto i : nums) {
        res += c * i;
        c++;
    }
    res -= (c - 1) * (*--nums.end());
    cout << res;
    return 0;
}