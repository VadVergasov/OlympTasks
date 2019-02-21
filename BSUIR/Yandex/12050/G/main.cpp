#include <bits/stdc++.h>

using namespace std;

vector<long long> tree;
vector<int> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tr + tl) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}
long long get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tr + tl) / 2;
    return get(v * 2, tl, tm, l, min(r, tm)) +
           get(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int pos, int x) {
    if (tl == tr) {
        tree[v] += x;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm) {
            update(v * 2, tl, tm, pos, x);
        } else {
            update(v * 2 + 1, tm + 1, tr, pos, x);
        }
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, q;
    in >> n >> q;
    a.resize(n);
    tree.resize(4 * n, 0);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == '+') {
            int t1, t2;
            in >> t1 >> t2;
            update(1, 0, n - 1, t1 - 1, t2);
        } else {
            int t1, t2;
            in >> t1 >> t2;
            out << get(1, 0, n - 1, t1 - 1, t2 - 1) << "\n";
        }
    }
    return 0;
}