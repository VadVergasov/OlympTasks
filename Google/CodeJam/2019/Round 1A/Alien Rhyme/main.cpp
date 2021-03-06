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

int res = 0;

struct node {
    node *next[26];
    int end, num;

    node() {
        for (int i = 0; i < 26; i++) {
            next[i] = nullptr;
        }

        end = 0;
        num = 0;
    }

    ~node() {
        delete[] next;
        delete &num;
        delete &end;
    }
};

node *root = new node();

void add(const string &s) {
    node *cur_v = root;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (cur_v->next[c - 'A'] == nullptr) {
            cur_v->next[c - 'A'] = new node();
        }
        cur_v->num++;
        cur_v = cur_v->next[c - 'A'];
    }

    cur_v->end++;
}

void find(int &num, node *cur_v) {
    bool f = false;
    for (int i = 0; i < 26; i++) {
        if (cur_v->next[i]->num > 1) {
            f = true;
            find(num, cur_v->next[i]);
        }
    }
    if (!f) {
        res += 2;
        num -= cur_v->num;
        delete cur_v;
    }
}

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string tmp;
            cin >> tmp;
            add(tmp);
        }
        while (n) {
            find(n, root);
        }
        cout << "Case #" << q + 1 << ": " << res << "\n";
        res = 0;
    }
    return 0;
}