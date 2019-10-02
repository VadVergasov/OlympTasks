#include <bits/stdc++.h>

using namespace std;

vector<int> tree, pos;

void build(int v, int tl, int tr) {
    if (tl == tl) {
        tree[v] = pos[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
    }
}

void update(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return;
    }
    if (tl == l && tr == r) {
        tree[v]++;
    } else {
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(tm, r));
        update(v * 2 + 1, tm + 1, tr, max(l, tm), r);
    }
}

int get(int v, int tl, int tr, int pos) {
    if (tl == tr) {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    if (pos <= tm) {
        return tree[v] + get(v * 2, tl, tm, pos);
    } else {
        return tree[v] + get(v * 2 + 1, tm + 1, tr, pos);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    tree.resize(4 * (n + m));
    pos.resize(n);
    for (int i = 0; i < n; i++) {
        pos[i] = n - (i + 1);
    }
    build(1, 0, n - 1);
    int num = n;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cout << get(1, 0, n + num, pos[t - 1]) << " ";
        update(1, 0, num - 1, 0, num - 1);
        pos[t - 1] = num;
        num++;
    }
    return 0;
}