#include <bits/stdc++.h>

using namespace std;

vector<int> tree;

void build(int v, int tl, int tr, vector<int> a) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tr + tl) / 2;
        build(v * 2, tl, tm, a);
        build(v * 2 + 1, tm + 1, tr, a);
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
    int n, m;
    cin >> n >> m;
    tree.resize(4 * n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(1, 0, n - 1, a);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        cout << get(1, 0, n - 1, t1 - 1, t2 - 1) << "\n";
    }
    return 0;
}