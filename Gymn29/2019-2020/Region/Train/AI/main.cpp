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

bool cmp(pair<int, pair<int, long long>> a, pair<int, pair<int, long long>> b) {
    if (a.second.second == b.second.second) {
        return a.second.first < b.second.first;
    }
    return a.second.second > b.second.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("input.txt");
    ofstream out("output.txt");
    in.tie(0);
    out.tie(0);
    int n, num = 0;
    in >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        in >> p[i];
        num += p[i];
    }
    for (int i = 0; i < n; i++) {
        in >> q[i];
    }
    vector<pair<int, pair<int, long long>>> all(num);
    vector<pair<int, long long>> r;
    for (int i = 0; i < num; i++) {
        int id, group;
        double a, b, c, d;
        in >> id >> group >> a >> b >> c >> d;
        a *= 100;
        b *= 100;
        c *= 100;
        d *= 100;
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            num--;
            i--;
            continue;
        }
        a = (int)round(a);
        b = (int)round(b);
        c = (int)round(c);
        d = int(d);
        int sum = a + b + c + d;
        all[i] = make_pair(group, make_pair(id, sum));
    }
    all.resize(num);
    sort(all.begin(), all.end(), cmp);
    for (auto i : all) {
        cout << i.first << " " << i.second.first << " " << i.second.second
             << "\n";
    }
    vector<int> last(n, -1);
    int i = 0;
    while (i <= all.size() - 1) {
        if (last[all[i].first - 1] == all[i].second.second &&
            q[all[i].first - 1] == 0) {
            q[all[i].first - 1]++;
        }
        if (q[all[i].first - 1] < 1) {
            i++;
            continue;
        }
        r.push_back(make_pair(all[i].second.first, all[i].second.second));
        last[all[i].first - 1] = all[i].second.second;
        q[all[i].first - 1]--;
        i++;
    }
    out << r.size() << "\n";
    for (auto i : r) {
        out << i.first << " " << fixed << setprecision(2)
            << (double)i.second / 100.0 << "\n";
    }
    return 0;
}
