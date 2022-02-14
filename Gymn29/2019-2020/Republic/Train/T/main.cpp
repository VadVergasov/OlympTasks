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

using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<long long, int>, null_type, less<pair<long long, int> >,
             rb_tree_tag, tree_order_statistics_node_update>
    ordered_set;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    ordered_set a, b;
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        a.insert({t, 0});
    }
    for (int i = 0; i < m; i++) {
        int t;
        in >> t;
        b.insert({t, 0});
    }
    int i = 1, additional = 0;
    long long res = 0;
    while (a.size() > 0 && b.size() > 0) {
        long long first = a.begin()->first, second = b.begin()->first;
        if (first > second) {
            pair<long long, int> nw = {first + second, i};
            b.erase(b.begin());
            a.erase(a.begin());
            a.insert(nw);
            res += a.order_of_key(nw) + 1;
        } else if (first < second) {
            pair<long long, int> nw = {first + second, i};
            b.erase(b.begin());
            a.erase(a.begin());
            b.insert(nw);
            res += b.order_of_key(nw) + 1;
        } else if (first == second) {
            if (i % 2 == 1) {
                pair<long long, int> nw = {first + second, i};
                b.erase(b.begin());
                a.erase(a.begin());
                a.insert(nw);
                res += a.order_of_key(nw) + 1;
            } else if (i % 2 == 0) {
                pair<long long, int> nw = {first + second, i};
                b.erase(b.begin());
                a.erase(a.begin());
                b.insert(nw);
                res += b.order_of_key(nw) + 1;
            }
            additional++;
        }
        i++;
    }
    out << res;
    return 0;
}