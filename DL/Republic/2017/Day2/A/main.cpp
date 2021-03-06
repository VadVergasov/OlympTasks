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

map<char, int> val = {
    {'A', 1}, {'C', 100001}, {'G', 10000000002}, {'T', 1000000000000003}};

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    string s;
    in >> s;
    vector<long long> sum(n);
    sum[0] = val[s[0]];
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + val[s[i]];
    }
    set<long long> all;
    for (int i = 0; i <= n - k; i++) {
        if (i) {
            all.insert(sum[i + k - 1] - sum[i - 1]);
        } else {
            all.insert(sum[i + k - 1]);
        }
    }
    out << all.size();
    return 0;
}
