#include <bits/stdc++.h>

using namespace std;

vector<pair<long long, long long> > tree;

void push(int v) {
    if (tree[v].second != -1) {
        tree[v * 2].second = tree[v * 2 + 1].second = tree[v].second;
        tree[v].second = -1;
    }
}

void update(int v, int tl, int tr, int l, int r, int val) {
    if (l > r) {
        return;
    }
    if (tl == l && tr == r) {
        tree[v].first = tree[v].second;
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(tm, r), val);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, val);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    tree.resize(4 * n, make_pair(0, -1));
    return 0;
}