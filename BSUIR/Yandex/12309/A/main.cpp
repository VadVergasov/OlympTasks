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

struct cmp {
    bool operator()(pair<long long, long long> a,
                    pair<long long, long long> b) {
        return a.second > b.second;
    }
};

int main() {
    ifstream in("castle.in");
    ofstream out("castle.out");
    long long all = 0;
    long long n, s;
    in >> n >> s;
    set<pair<long long, long long>, cmp> a;
    for (long long i = 0; i < n; i++) {
        long long t1, t2;
        in >> t1 >> t2;
        all += t1;
        a.insert(make_pair(t1, t2));
    }
    for (auto i : a) {
        cout << i.first << " " << i.second << "\n";
    }
    while (s > 0) {
    }
    return 0;
}