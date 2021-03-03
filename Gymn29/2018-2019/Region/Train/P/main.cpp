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

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first > b.second;
    }
    return a.second > b.second;
}

bool cmp(vector<int> a, vector<int> b) {
    if (a[1] > b[1]) {
        return false;
    }
    if (a[1] == b[1]) {
        return a[6] > b[6];
    }
    return true;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, tmp, m = 0, num = 0;
    double a, b, c, d;
    in >> n;
    vector<int> p, q;
    vector<vector<int> > u;
    vector<pair<int, int> > r;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        m += tmp;
        p.push_back(tmp);
    }
    u.resize(m);
    for (int i = 0; i < n; i++) {
        in >> tmp;
        q.push_back(tmp);
    }
    u.push_back({0, 0, 0, 0, 0, 0, -1});
    for (int i = 0; i < m; i++) {
        int sum = 0;
        in >> tmp;
        u[i].push_back(tmp);
        in >> tmp;
        u[i].push_back(tmp);
        in >> a >> b >> c >> d;
        sum = a + b + c + d;
        u[i].push_back(a);
        u[i].push_back(b);
        u[i].push_back(c);
        u[i].push_back(d);
        u[i].push_back(sum);
    }
    sort(u.begin(), u.end(), cmp);
    for (int i = 0; i < n; i++) {
        int j = 1;
        while ((j < q[i] + 1 ||
                (u[num + j][6] == u[num + j - 1][6]) && q[i] != 0) &&
               u[num + j][6] != 0) {
            r.push_back(make_pair(u[num + j][0], u[num + j][6]));
            j++;
        }
        num += p[i];
    }
    out << r.size() << "\n";
    sort(r.begin(), r.end(), comp);
    for (int i = 0; i < r.size(); i++) {
        out << r[i].first << " " << r[i].second << "\n";
    }
    return 0;
}
