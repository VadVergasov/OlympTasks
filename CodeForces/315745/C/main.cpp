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

#pragma GCC optimize("Ofast,unroll-loops")

using namespace std;

int encode(string s) {
    string res = "";
    int i = 0, prev = 0;
    while (i < (int)s.size()) {
        while (s[i] == s[prev]) {
            i++;
        }
        if (i - prev == 1) {
            res += s[prev];
        } else {
            res += to_string(i - prev) + s[prev];
        }
        prev = i;
    }
    return (int)res.size();
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    string source = "";
    for (int i = 0; i < (int)s.size(); i++) {
        string num = "";
        while (isalnum(s[i]) && !isalpha(s[i])) {
            num += s[i];
            i++;
        }
        int count = max(1, atoi(num.c_str()));
        for (int j = 0; j < count; j++) {
            source += s[i];
        }
    }
    int mn = 1e9, mx = 0, res = 0;
    string res1 = "", res2 = "", t = "";
    for (int i = 0; i < (int)source.size(); i++) {
        t = source;
        t.erase(t.begin() + i);
        res = encode(t);
        if (mn > res) {
            res1 = "2 " + to_string(i + 1);
            mn = res;
        }
        if (mx < res) {
            res2 = "2 " + to_string(i + 1);
            mx = res;
        }
        for (auto j : {'A', 'G', 'C', 'T'}) {
            t = source;
            t.insert(t.begin() + i, j);
            res = encode(t);
            if (mn > res) {
                res1 = "1 " + to_string(i) + " " + j;
                mn = res;
            }
            if (mx < res) {
                res2 = "1 " + to_string(i) + " " + j;
                mx = res;
            }
            t = source;
            if (t[i] == j) {
                continue;
            }
            t[i] = j;
            res = encode(t);
            if (mn > res) {
                res1 = "3 " + to_string(i + 1) + " " + j;
                mn = res;
            }
            if (mx < res) {
                res2 = "3 " + to_string(i + 1) + " " + j;
                mx = res;
            }
        }
    }
    for (auto j : {'A', 'G', 'C', 'T'}) {
        t = source;
        t.insert(t.begin() + t.size(), j);
        int res = encode(t);
        if (mn > res) {
            res1 = "1 " + to_string(t.size() - 1) + " " + j;
            mn = res;
        }
        if (mx < res) {
            res2 = "1 " + to_string(t.size() - 1) + " " + j;
            mx = res;
        }
    }
    cout << res1 << "\n" << res2;
    return 0;
}
