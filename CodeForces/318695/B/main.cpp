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

const vector<string> alphabet = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
                                 "j", "k", "l", "m", "n", "o", "p", "q", "r",
                                 "s", "t", "u", "v", "w", "x", "y", "z"};

long long getHash(const string& s, long long a, long long p) {
    long long res = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        res = (res * a + (s[i] - 'a' + 1)) % p;
    }
    return res;
}

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    srand(time(NULL));
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a, b;
    cin >> a >> b;
    set<string> res;
    string temp = "";
    for (int i = 0; i < rand() % 49 + 1; i++) {
        temp += alphabet[rand() % 26];
    }
    res.insert(temp);
    long long temphash = getHash(temp, a, b);
    string cur = "a";
    while (res.size() < 100) {
        cur += alphabet[rand() % 26];
        if (cur.size() > 50) {
            cur = alphabet[rand() % 26];
        }
        if (temphash == getHash(cur, a, b)) {
            res.insert(cur);
        }
    }
    for (auto i : res) {
        cout << i << "\n";
    }
    return 0;
}