#include <bits/stdc++.h>

using namespace std;

void push(int v, int tl, int tr, vector<int> &a,
          vector<pair<long long, int> > &tree) {
    if (tree[v].second != 0) {
        tree[v * 2].second += tree[v].second;
        tree[v * 2 + 1].second += tree[v].second;
        int tm = (tr + tl) / 2;
        tree[v * 2].first += (long long)tree[v].second;
        tree[v * 2 + 1].first += (long long)tree[v].second;
    }
}

void build(int v, int tl, int tr, vector<int> &a,
           vector<pair<long long, int> > &tree) {
    if (tl == tr) {
        tree[v].first = a[tl];
    } else {
        int tm = (tr + tl) / 2;
        build(v * 2, tl, tm, a, tree);
        build(v * 2 + 1, tm + 1, tr, a, tree);
        tree[v].first = min(tree[v * 2].first, tree[v * 2 + 1].first);
    }
}

long long get(int v, int tl, int tr, int l, int r, vector<int> &a,
              vector<pair<long long, int> > &tree) {
    if (tl == l && tr == r) {
        tree[v].first = 1e9;
        return tl;
    }
    push(v, tl, tr, a, tree);
    int tm = (tr + tl) / 2;
    if (tree[v].first == tree[v * 2 + 1].first) {
        return get(v * 2 + 1, tm + 1, tr, max(tm + 1, l), r, a, tree);
    } else {
        return get(v * 2, tl, tm, l, min(r, tm), a, tree);
    }
}

void edit(int v, int tl, int tr, int l, int r, int x, vector<int> &a,
          vector<pair<long long, int> > &tree) {
    if (l > r) {
        return;
    }
    if (tl == l && tr == r) {
        tree[v].first += x;
        tree[v].second += x;
    } else {
        push(v, tl, tr, a, tree);
        int tm = (tr + tl) / 2;
        edit(v * 2, tl, tm, l, min(r, tm), x, a, tree);
        edit(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, x, a, tree);
        tree[v].first = min(tree[v * 2].first, tree[v * 2 + 1].first);
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<long long, int> > tree(4 * n);
    vector<int> a(n), res(n);
    for (auto &i : a) {
        cin >> i;
    }
    build(1, 0, n - 1, a, tree);
    for (int i = 0; i < n; i++) {
        int pos = get(1, 0, n - 1, 0, n - 1, a, tree);
        res[pos] = i;
    }
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
