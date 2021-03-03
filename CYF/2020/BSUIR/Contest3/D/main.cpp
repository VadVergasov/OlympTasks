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

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

long long res = 1;

struct v {
    v *next[2];

    v() {
        next[0] = nullptr;
        next[1] = nullptr;
    }
};

v *root = new v();

void custom_or(vector<bool> &x, int c) {
    vector<bool> s(x.size());
    s[x.size() - 1 - c] = 1;
    bool f = false;
    for (int i = x.size() - 1; i >= 0; i--) {
        if (x[i] == 1 && s[i] == 1 || x[i] == 1 && f) {
            f = false;
            x[i] = 0;
            if (i == 0) {
                continue;
            }
            if (x[i - 1] == 1) {
                f = true;
            }
            x[i - 1] = 1;
        } else if (x[i] == 1 || s[i] == 1) {
            x[i] = 1;
        }
    }
}

void add(vector<bool> x) {
    v *now = root;
    for (int i = 0; i < x.size(); i++) {
        if (now->next[x[i]] == nullptr) {
            res++;
            now->next[x[i]] = new v();
        }
        now = now->next[x[i]];
    }
}

void del(v *cur) {
    v *now = cur;
    if (now->next[0] != nullptr) {
        del(now->next[0]);
    }
    if (now->next[1] != nullptr) {
        del(now->next[1]);
    }
    delete now->next[0];
    delete now->next[1];
}

int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; l++) {
        int n, q;
        cin >> n >> q;
        vector<bool> x(n);
        for (int i = 0; i < q; i++) {
            char tmp;
            cin >> tmp;
            if (tmp == '!') {
                int c;
                cin >> c;
                custom_or(x, c);
                add(x);
            } else {
                cout << res << "\n";
            }
        }
        del(root);
        res = 1;
        root = new v();
    }
    return 0;
}