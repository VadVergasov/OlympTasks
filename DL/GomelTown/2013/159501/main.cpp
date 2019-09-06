#include <bits/stdc++.h>

using namespace std;

vector<int> tree, a;

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tr + tl) / 2;
    return sum(v * 2, tl, tm, l, min(tm, r)) +
           sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int x, int val) {
    if (tl == tr) {
        tree[v] += val;
    } else {
        int tm = (tr + tl) / 2;
        if (x <= tm) {
            update(v * 2, tl, tm, x, val);
        } else {
            update(v * 2 + 1, tm + 1, tr, x, val);
        }
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    tree.resize(4 * n);
    a.resize(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            update(1, 0, n - 1, b - 1, c);
        } else {
            cout << sum(1, 0, n - 1, b - 1, c - 1) << "\n";
        }
    }
    return 0;
}