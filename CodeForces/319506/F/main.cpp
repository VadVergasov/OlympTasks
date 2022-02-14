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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    ordered_set<long long> first, second;
    for (auto &i : a) {
        cin >> i;
        second.insert(i);
    }
    if (n < 3) {
        cout << 0;
        return 0;
    }
    second.erase(second.lower_bound(a[0] - 1));
    long long res = 0;
    for (int j = 1; j < n - 1; j++) {
        first.insert(a[j - 1]);
        second.erase(second.lower_bound(a[j] - 1));
        res += (long long)first.order_of_key(a[j]) *
               (long long)((int)second.size() -
                           (int)second.order_of_key(a[j] + 1));
    }
    cout << res;
    return 0;
}
