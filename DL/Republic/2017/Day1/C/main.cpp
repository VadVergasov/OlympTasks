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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k;
    in >> n >> m >> k;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    vector<int> keys(k);
    for (auto &i : keys) {
        in >> i;
    }
    vector<int> res(k, 0);
    ordered_set t;
    for (int j = 0; j < m; j++) {
        t.insert(a[j]);
    }
    for (int i = 0; i < k; i++) {
        res[i] = max(res[i], *t.find_by_order(keys[i] - 1));
    }
    for (int j = m; j < n; j++) {
        t.erase(a[j - m]);
        t.insert(a[j]);
        for (int j = 0; j < k; j++) {
            res[j] = max(res[j], *t.find_by_order(keys[j] - 1));
        }
    }
    for (auto i : res) {
        out << i << " ";
    }
    return 0;
}