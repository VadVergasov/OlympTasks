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

bool sequal(vector<char> &a, vector<char> &b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream in("maniac.in");
    ofstream out("maniac.out");
    map<char, char> a, ap;
    for (int i = 0; i < 26; i++) {
        char t;
        in >> t;
        a['a' + i] = t;
    }
    int n;
    in >> n;
    string s1, s2;
    in >> s1 >> s2;
    bool f = false;
    for (int i = 0; i < n; i++) {
        if (ap.find(s1[i]) != ap.end()) {
            if (ap[s1[i]] != s2[i]) {
                out << -1;
                return 0;
            }
        } else {
            ap[s1[i]] = s2[i];
            if (s1[i] != s2[i]) {
                f = true;
            }
        }
    }
    vector<char> cur(ap.size()), need(ap.size());
    int j = 0;
    for (auto i : ap) {
        cur[j] = i.first;
        need[j] = i.second;
        j++;
    }
    int res = 0;
    while (!sequal(cur, need)) {
        for (int i = 0; i < cur.size(); i++) {
            cur[i] = a[cur[i]];
        }
        res++;
    }
    out << res;
    return 0;
}