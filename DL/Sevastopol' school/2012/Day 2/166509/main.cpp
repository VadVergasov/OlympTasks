#include <bits/stdc++.h>

using namespace std;

vector<int> tree;
vector<int> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

void add(int v, int tl, int tr, int x, int val) {
    if (tl == tr) {
        tree[v] = val;
    } else {
        int tm = (tl + tr) / 2;
        if (x <= tm) {
            add(v * 2, tl, tm, x, val);
        } else {
            add(v * 2 + 1, tm + 1, tr, x, val);
        }
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tr + tl) / 2;
    return sum(v * 2, tl, tm, l, min(r, tm)) +
           sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

int main() {
    ifstream in("K.IN");
    ofstream out("K.OUT");
    int n, q;
    in >> n >> q;
    a.resize(n);
    tree.resize(4 * n, 0);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    for (int i = 0; i < q; i++) {
        char s;
        in >> s;
        int a, b;
        in >> a >> b;
        if (s == '?') {
            out << sum(1, 0, n - 1, a - 1, b - 1) << "\n";
        } else {
            add(1, 0, n - 1, a - 1, b);
        }
    }
    return 0;
}