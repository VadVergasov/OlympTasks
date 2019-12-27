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