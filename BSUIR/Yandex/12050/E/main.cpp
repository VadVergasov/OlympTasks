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

using namespace std;

vector<int> coords;
vector<pair<pair<int, int>, int> > a;

int check(int c) {
    int res =
        distance(lower_bound(coords.begin(), coords.end(), a[c].first.first),
                 lower_bound(coords.begin(), coords.end(),
                             a[c].first.first + a[c].first.second - 1));
    auto next = lower_bound(coords.begin(), coords.end(),
                            a[c].first.first + a[c].first.second - 1);
    if (*(next - 1) == a[c].first.first) {
        return res;
    }
    if (next == coords.end()) {
        return res;
    }
    if (*next > a[c].first.first + a[c].first.second - 1) {
        next--;
    }
    res += check(distance(coords.begin(), next));
    return res;
}

int main() {
    ifstream in("domino.in");
    ofstream out("domino.out");
    int n;
    in >> n;
    coords.resize(n);
    a.resize(n);
    vector<pair<int, int> > re(n);
    for (int i = 0; i < n; i++) {
        in >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
        coords[i] = a[i].first.first;
    }
    sort(coords.begin(), coords.end());
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int l, r;
        int res = check(i);
        re[i] = make_pair(a[i].second, res);
    }
    sort(re.begin(), re.end());
    for (int i = 0; i < n; i++) {
        out << re[i].second << "\n";
    }
    return 0;
}