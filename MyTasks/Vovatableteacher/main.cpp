#include <bits/stdc++.h>

using namespace std;

vector<unsigned int> tree;
vector<unsigned int> h;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = h[tl];
    } else {
        int tm = (tr + tl) >> 1;
        build((v << 1), tl, tm);
        build((v << 1) + 1, tm + 1, tr);
        tree[v] = min(tree[(v << 1)], tree[(v << 1) + 1]);
    }
}

long long get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 1e6;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tr + tl) >> 1;
    return min(get((v << 1), tl, tm, l, min(r, tm)),
               get((v << 1) + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(int v, int tl, int tr, int pos, int x) {
    if (tl == tr) {
        tree[v] += x;
    } else {
        int tm = (tl + tr) >> 1;
        if (pos <= tm) {
            update((v << 1), tl, tm, pos, x);
        } else {
            update((v << 1) + 1, tm + 1, tr, pos, x);
        }
        tree[v] = min(tree[(v << 1)], tree[(v << 1) + 1]);
    }
}

int main() {
    int n, q;
    unsigned int H;
    cin >> n >> H >> q;
    h.resize(n);
    tree.resize(1 << (int)ceil(log2(n)) + 1, 1e6);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    build(1, 0, n - 1);
    for (int i = 0; i < q; i++) {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (H - get(1, 0, n - 1, max(0, t1 - t2 - 1),
                    min(n - 1, t1 + t2 - 1)) >=
            t3) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}