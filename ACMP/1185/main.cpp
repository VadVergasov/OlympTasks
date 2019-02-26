#include <bits/stdc++.h>

using namespace std;

vector<long long> tree;
vector<long long> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tr + tl) >> 1;
        build((v << 1), tl, tm);
        build((v << 1) + 1, tm + 1, tr);
        tree[v] = max(tree[(v << 1)], tree[(v << 1) + 1]);
    }
}

long long get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tr + tl) >> 1;
    return max(get((v << 1), tl, tm, l, min(r, tm)),
               get((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(int v, int tl, int tr, int pos, int x) {
    if (tl == tr) {
        tree[v] = x;
    } else {
        int tm = (tl + tr) >> 1;
        if (pos <= tm) {
            update((v << 1), tl, tm, pos, x);
        } else {
            update((v << 1) + 1, tm + 1, tr, pos, x);
        }
        tree[v] = max(tree[(v << 1)], tree[(v << 1) + 1]);
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    a.resize(n);
    tree.resize(4 * n, 0);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    int q;
    in >> q;
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == 'm') {
            int l, r;
            in >> l >> r;
            out << get(1, 0, n - 1, l - 1, r - 1) << " ";
        } else {
            int pos, x;
            in >> pos >> x;
            update(1, 0, n - 1, pos - 1, x);
        }
    }
    return 0;
}