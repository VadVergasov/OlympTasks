#include <bits/stdc++.h>

using namespace std;

vector<pair<long long, int> > tree;

void push(int v) {
    if (tree[v].second != -1) {
        tree[v * 2].second = tree[v * 2 + 1].second = tree[v].second;
        tree[v].second = -1;
    }
}

void build(int v, int tl, int tr, vector<int> a) {
    if (tl == tr) {
        tree[v].first += a[tl];
    } else {
        int tm = (tr + tl) / 2;
        build(v * 2, tl, tm, a);
        build(v * 2 + 1, tm + 1, tr, a);
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
    push(v);
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
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), x);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, x);
        tree[v].first = tree[v * 2].first + tree[v * 2 + 1].first;
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, q;
    in >> n >> q;
    vector<int> a(n);
    tree.resize(4 * n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1, a);
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == '?') {
            int t1, t2;
            in >> t1 >> t2;
            out << get(1, 0, n - 1, t1 - 1, t2 - 1) << "\n";
        } else {
            int t1, t2, x;
            in >> t1 >> t2 >> x;
            update(1, 0, n - 1, t1 - 1, t2 - 1, x);
        }
    }
    return 0;
}