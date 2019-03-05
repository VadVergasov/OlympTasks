#include <bits/stdc++.h>

using namespace std;

vector<int> tree, a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        tree[v] = __gcd(tree[v * 2], tree[v * 2 + 1]);
    }
}

int get(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    return __gcd(get(v * 2, tl, tm, l, min(r, tm)),
                 get(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n;
    a.resize(n);
    tree.resize(4 * n, 0);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    build(1, 0, n - 1);
    in >> m;
    for (int i = 0; i < m; i++) {
        int t1, t2;
        in >> t1 >> t2;
        out << get(1, 0, n - 1, t1 - 1, t2 - 1) << " ";
    }
    return 0;
}