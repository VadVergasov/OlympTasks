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
    int tm = (tr + tl) >> 1;
    return get((v << 1), tl, tm, l, min(r, tm)) +
           get((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r);
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
        tree[v] = tree[(v << 1)] + tree[(v << 1) + 1];
    }
}

int main() {
    ifstream cin("rsq.in");
    ofstream cout("rsq.out");
    int n, m;
    cin >> n >> m;
    a.resize(n, 0);
    tree.resize(4 * n, 0);
    for (auto &i : a) {
        cin >> i;
    }
    build(1, 0, n - 1);
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (t == 0) {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << get(1, 0, n - 1, l, r) << "\n";
        } else {
            int x, y;
            cin >> x >> y;
            x--;
            update(1, 0, n - 1, x, y);
        }
    }
    return 0;
}
