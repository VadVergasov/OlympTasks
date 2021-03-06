// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
    map<int, int> nums;
    int n, m, tmp, mx = 0, counter = 0;
    long long res = 0;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        nums[tmp]++;
        mx = max(mx, tmp);
        a.push_back(tmp);
    }
    if (n == 1) {
        cout << 0;
        return 0;
    }
    for (auto i = nums.rbegin(); i != nums.rend(); i++) {
        nums[i->first] += counter;
        counter += i->second;
    }
    for (auto const& i : nums) {
        res += (i.second - 1);
    }
    cout << res;
    return 0;
}
