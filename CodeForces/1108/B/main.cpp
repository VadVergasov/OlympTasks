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
    int n;
    cin >> n;
    map<int, int> nums;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        nums[t]++;
    }
    int a, gcd, b;
    a = nums.rbegin()->first;
    for (auto i : nums) {
        if (a % i.first == 0) {
            nums[i.first]--;
        }
    }
    for (auto i = nums.rbegin(); i != nums.rend(); i++) {
        if (i->second > 0) {
            b = i->first;
            break;
        }
    }
    cout << a << " " << b;
    return 0;
}
