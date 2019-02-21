#include <bits/stdc++.h>

using namespace std;

vector<pair<long long, int> > tree;
vector<int> a;

void push(int v, int tl, int tr) {
    if (tree[v].second != -1) {
        tree[v * 2].second = tree[v * 2 + 1].second = tree[v].second;
        int tm = (tl + tr) / 2;
        tree[v * 2].first = (long long)tree[v].second * (tm - tl + 1);
        tree[v * 2 + 1].first = (long long)tree[v].second * (tr - tm);
        tree[v].first = tree[v * 2].first + tree[v * 2 + 1].first;
        tree[v].second = -1;
    }
}

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v].first = a[tl];
    } else {
        int tm = (tr + tl) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        tree[v].first = tree[v * 2].first + tree[v * 2 + 1].first;
    }
}

long long get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v].first;
    }
    push(v, tl, tr);
    int tm = (tr + tl) / 2;
    return get(v * 2, tl, tm, l, min(r, tm)) +
           get(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int l, int r, int x) {
    if (l > r) {
        return;
    }
    if (tl == tr) {
        tree[v].first = x;
    } else if (tl == l && tr == r) {
        tree[v].second = x;
        push(v, tl, tr);
    } else {
        push(v, tl, tr);
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), x);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, x);
        tree[v].first = tree[v * 2].first + tree[v * 2 + 1].first;
    }
}

int main() {
    ifstream in("segtree2.in");
    ofstream out("segtree2.out");
    int n, q;
    in >> n >> q;
    pair<long long, int> fill = make_pair(0, -1);
    tree.resize(4 * n + 10, fill);
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == '=') {
            int t1, t2, x;
            in >> t1 >> t2 >> x;
            update(1, 0, n - 1, t1 - 1, t2 - 1, x);
        } else {
            int t1, t2;
            in >> t1 >> t2;
            out << get(1, 0, n - 1, t1 - 1, t2 - 1) << "\n";
        }
    }
    return 0;
}