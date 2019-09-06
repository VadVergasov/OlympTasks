#include <bits/stdc++.h>

using namespace std;

vector<long long> mn, mx, a;

void build_mn(int v, int tl, int tr) {
    if (tl == tr) {
        mn[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build_mn(v * 2, tl, tm);
        build_mn(v * 2 + 1, tm + 1, tr);
        mn[v] = min(mn[v * 2], mn[v * 2 + 1]);
    }
}

void build_mx(int v, int tl, int tr) {
    if (tl == tr) {
        mx[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build_mx(v * 2, tl, tm);
        build_mx(v * 2 + 1, tm + 1, tr);
        mx[v] = max(mx[v * 2], mx[v * 2 + 1]);
    }
}

int ret_mn(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return INT_MAX;
    }
    if (tl == l && tr == r) {
        return mn[v];
    }
    int tm = (tl + tr) / 2;
    return min(ret_mn(v * 2, tl, tm, l, min(tm, r)),
               ret_mn(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

int ret_mx(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return INT_MIN;
    }
    if (tl == l && tr == r) {
        return mx[v];
    }
    int tm = (tl + tr) / 2;
    return max(ret_mx(v * 2, tl, tm, l, min(tm, r)),
               ret_mx(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update_mn(int v, int tl, int tr, int x, int val) {
    if (tl == tr) {
        mn[v] = val;
    } else {
        int tm = (tr + tl) / 2;
        if (x <= tm) {
            update_mn(v * 2, tl, tm, x, val);
        } else {
            update_mn(v * 2 + 1, tm + 1, tr, x, val);
        }
        mn[v] = min(mn[v * 2], mn[v * 2 + 1]);
    }
}

void update_mx(int v, int tl, int tr, int x, int val) {
    if (tl == tr) {
        mx[v] = val;
    } else {
        int tm = (tr + tl) / 2;
        if (x <= tm) {
            update_mx(v * 2, tl, tm, x, val);
        } else {
            update_mx(v * 2 + 1, tm + 1, tr, x, val);
        }
        mx[v] = max(mx[v * 2], mx[v * 2 + 1]);
    }
}

int main() {
    ifstream in("B.IN");
    ofstream out("B.OUT");
    int n = 0, k;
    in >> k;
    vector<pair<int, int> > q(k);
    for (int i = 0; i < k; i++) {
        int a, b;
        in >> a >> b;
        q[i] = make_pair(a, b);
        if (a > 0) {
            n = max(n, b);
        } else {
            n = max(n, abs(a));
        }
    }
    mn.resize(4 * n, INT_MAX);
    mx.resize(4 * n, INT_MIN);
    a.resize(n);
    for (long long i = 1; i <= n; i++) {
        a[i - 1] = ((i * i) % 12345) + ((i * i * i) % 23456);
    }
    build_mn(1, 0, n - 1);
    build_mx(1, 0, n - 1);
    for (int i = 0; i < k; i++) {
        if (q[i].first > 0) {
            out << ret_mx(1, 0, n - 1, q[i].first - 1, q[i].second - 1) -
                       ret_mn(1, 0, n - 1, q[i].first - 1, q[i].second - 1)
                << "\n";
        } else {
            update_mn(1, 0, n - 1, (-q[i].first) - 1, q[i].second);
            update_mx(1, 0, n - 1, (-q[i].first) - 1, q[i].second);
        }
    }
    return 0;
}