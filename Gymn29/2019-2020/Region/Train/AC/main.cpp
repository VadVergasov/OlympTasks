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
    ifstream in("input.txt");
    ofstream out("output.txt");
    ios_base::sync_with_stdio(0);
    in.tie(0);
    out.tie(0);
    int n, s, k;
    in >> n >> k >> s;
    vector<pair<long long, long long>> dp(n + 1, make_pair(10e9, -1));
    if (k == 0) {
        out << ceil((double)n / (double)s) << " " << n;
    } else {
        set<int> d;
        for (int i = 0; i < k; i++) {
            int t;
            in >> t;
            d.insert(t);
        }
        int mn = 0, i;
        for (i = 0; i < n; i += s) {
            mn++;
            while (d.find(i) != d.end()) {
                i--;
            }
        }
        if (i < n) {
            mn++;
        }
        out << mn << " " << n - k;
    }
    return 0;
}