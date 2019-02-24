#include <bits/stdc++.h>

using namespace std;

vector<long long> tree;
vector<long long> a;

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

int bin(long long val, int v, int tl, int tr) {
    if (tree[v] < val && v == 1) {
        return -1;
    }
    if (tl == tr) {
        return tl;
    }
    int tm = (tl + tr) / 2;
    if (tree[v * 2] < val) {
        return bin(val - tree[v * 2], v * 2 + 1, tm + 1, tr);
    } else {
        return bin(val, v * 2, tl, tm);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    tree.resize(4 * n, 0);
    a.resize(n, 0);
    long long t;
    cin >> t;
    a[0] = t;
    for (int i = 1; i < n; i++) {
        cin >> t;
        a[i] = a[i - 1] + t;
    }
    for (auto i : a) {
        cout << i << " ";
    }
    build(1, 0, n - 1);
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int t1, t2;
            cin >> t1 >> t2;
        } else if (t == 2) {
            long long t1;
            cin >> t1;
            cout << get(1, 0, n - 1, 0, t1 - 1) << "\n";
        } else {
            long long t1;
            cin >> t1;
            int ret = bin(t1, 1, 0, n - 1);
            if (ret == -1) {
                cout << n + 1 << "\n";
            } else {
                cout << ret << "\n";
            }
        }
    }
    return 0;
}