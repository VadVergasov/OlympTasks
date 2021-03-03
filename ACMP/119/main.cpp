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

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b) {
    if (a.first > b.first) {
        return false;
    }
    if (a.first < b.first) {
        return true;
    }
    if (a.second.first < b.second.first) {
        return true;
    }
    if (a.second.first > b.second.first) {
        return false;
    }
    return a.second.second < b.second.second;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<pair<int, pair<int, int> > > a;
    for (int i = 0; i < n; i++) {
        int t1, t2, t3;
        in >> t1 >> t2 >> t3;
        a.push_back(make_pair(t1, make_pair(t2, t3)));
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        out << a[i].first << " " << a[i].second.first << " "
            << a[i].second.second << "\n";
    }
    return 0;
}