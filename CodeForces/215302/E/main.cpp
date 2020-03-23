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

int main() {
    int n, m;
    cin >> n >> m;
    a.resize(n);
    tree.resize(4 * n);
    for (auto &i : a) {
        cin >> i;
    }
    build(1, 0, n - 1);
    for (int i = 0; i < m; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        cout << get(1, 0, n - 1, l - 1, r - 1) % x << "\n";
    }
    return 0;
}