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
    int n, m, k, tmp;
    string t;
    in >> n >> m >> k;
    vector<string> r;
    vector<pair<int, string> > a;
    for (int i = 0; i < n; i++) {
        in >> tmp >> t;
        a.push_back(make_pair(tmp, t));
    }
    for (int i = 0; i < n; i++) {
        string s = "";
        int cur = a[i].first - 1;
        for (int j = 0; j < m; j++) {
            s += a[cur].second;
            cur = a[cur].first - 1;
        }
        r.push_back(s);
    }
    sort(r.begin(), r.end());
    for (int i = 0; i < r.size(); i++) {
        out << r[i] << endl;
    }
    return 0;
}
