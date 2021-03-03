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

int v[3];

bool cmp(pair<int, string> a, pair<int, string> b) {
    return (a.second < b.second) && (a.second.size() > b.second.size());
}

int main() {
    int n, tmp;
    cin >> n;
    vector<pair<int, string> > a;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        cin >> s;
        sort(s.begin(), s.end());
        a.push_back(make_pair(tmp, s));
        for (int j = 0; j < s.size(); j++) {
            v[s[j] - 'A']++;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (v[i] == 0) {
            cout << -1;
            return 0;
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second << "\n";
    }
    return 0;
}
