#include <bits/stdc++.h>

using namespace std;

vector<long long> tree;
vector<int> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl + tr) >> 1;
        build((v << 1), tl, tm);
        build((v << 1) + 1, tm + 1, tr);
        tree[v] = tree[(v << 1)] + tree[(v << 1) + 1];
    }
}

long long get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tl + tr) >> 1;
    return get((v << 1), tl, tm, l, min(r, tm)) +
           get((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int pos, int x) {
    if (tr == tl) {
        tree[v] = x;
    } else {
        int tm = (tr + tl) >> 1;
        if (pos <= tm) {
            update((v << 1), tl, tm, pos, x);
        } else {
            update((v << 1) + 1, tm + 1, tr, pos, x);
        }
        tree[v] = tree[(v << 1)] + tree[(v << 1) + 1];
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    a.resize(n);
    tree.resize(n << 2);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    int q;
    in >> q;
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == 's') {
            int t1, t2;
            in >> t1 >> t2;
            out << get(1, 0, n - 1, t1 - 1, t2 - 1) << " ";
        } else {
            int t1, t2;
            in >> t1 >> t2;
            update(1, 0, n - 1, t1 - 1, t2);
        }
    }
    return 0;
}