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

struct tree {
    vector<tree*> childs;
    long long sum = 0, tl, tr;

    tree(long long l, long long r) {
        childs.resize(2, nullptr);
        tl = l;
        tr = r;
    }
};

tree* root = new tree(1, 10e9);

void add(long long l, long long r, tree* cur) {
    cur->sum += r - l + 1;
    if (cur->tl == l && cur->tr == r) {
        return;
    } else {
        if (cur->tl == l && (cur->tr + cur->tl) / 2 == r) {
            if (cur->childs[0] == nullptr) {
                cur->childs[0] = new tree(l, (cur->tr - cur->tl) / 2);
            }
        } else if (cur->tr == r && (cur->tl + cur->tr) / 2 == l) {
            if (cur->childs[1] == nullptr) {
                cur->childs[1] = new tree((cur->tr - cur->tl) / 2, r);
            }
        } else {
            if (cur->childs[1] == nullptr) {
                cur->childs[1] = new tree((cur->tr - cur->tl) / 2, r);
            }
            if (cur->childs[1] == nullptr) {
                cur->childs[1] = new tree((cur->tr - cur->tl) / 2, r);
            }
        }
        cur->sum += r - l + 1;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        add(l, r, root);
    }
    return 0;
}