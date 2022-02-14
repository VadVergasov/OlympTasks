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

int main() {
    string s;
    cin >> s;
    s += '$';
    vector<int> c(s.size()), p(s.size());
    vector<pair<char, int> > a(s.size());
    for (int i = 0; i < s.size(); i++) {
        a[i] = {s[i], i};
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < s.size(); i++) {
        p[i] = a[i].second;
    }
    c[p[0]] = 0;
    for (int i = 1; i < s.size(); i++) {
        if (a[i].first == a[i - 1].first) {
            c[p[i]] = c[p[i - 1]];
        } else {
            c[p[i]] = c[p[i - 1]] + 1;
        }
    }
    int k = 0;
    while ((1 << k) < s.size()) {
        vector<pair<pair<int, int>, int> > tmp(s.size());
        for (int i = 0; i < s.size(); i++) {
            tmp[i] = {{c[i], c[(i + (1 << k)) % s.size()]}, i};
        }
        sort(tmp.begin(), tmp.end());
        for (int i = 0; i < s.size(); i++) {
            p[i] = tmp[i].second;
        }
        c[p[0]] = 0;
        for (int i = 1; i < s.size(); i++) {
            if (tmp[i].first == tmp[i - 1].first) {
                c[p[i]] = c[p[i - 1]];
            } else {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
        k++;
    }
    for (auto i : p) {
        cout << i << " ";
    }
    return 0;
}