// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("tune=native")

using namespace std;
using namespace __gnu_pbds;

template <typename T1, typename T2>
using hash_map = gp_hash_table<T1, T2>;

template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void build(int v, int tl, int tr, vector<long long> &a,
           vector<long long> &tree) {
    if (tl > tr) {
        return;
    }
    if (tl == tr) {
        tree[v] = a[tl];
        return;
    }
    int m = (tl + tr) >> 1;
    build(v << 1, tl, m, a, tree);
    build((v << 1) + 1, m + 1, tr, a, tree);
    tree[v] = tree[v << 1] + tree[(v << 1) + 1];
}

int get(int v, int tl, int tr, int l, int r, vector<long long> &tree) {
    if (tl > tr || l > r) {
        return 0;
    }
    if (tl == l && tr == r) {
        return tree[v];
    }
    int m = (tl + tr) >> 1;
    return get(v << 1, tl, m, l, min(m, r), tree) +
           get((v << 1) + 1, m + 1, tr, max(l, m + 1), r, tree);
}

void update(int v, int tl, int tr, int x, int val, vector<long long> &tree) {
    if (tl > tr) {
        return;
    }
    if (tl == tr && tl == x) {
        tree[v] = val;
        return;
    } else if (tl == tr) {
        return;
    }
    int m = (tl + tr) >> 1;
    update(v << 1, tl, m, x, val, tree);
    update((v << 1) + 1, m + 1, tr, x, val, tree);
    tree[v] = tree[v << 1] + tree[(v << 1) + 1];
}

long long binpow(long long n, long long p) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n;
        }
        n *= n;
        p >>= 1;
    }
    return res;
}

int get_parent(int v, vector<int> &p) {
    if (p[v] == v) {
        return v;
    }
    return p[v] = get_parent(p[v], p);
}

void unite(int a, int b, vector<int> &p, vector<int> &ranks) {
    a = get_parent(a, p);
    b = get_parent(b, p);
    if (a != b) {
        if (ranks[a] < ranks[b]) {
            swap(a, b);
            p[b] = a;
            ranks[a]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << a * b << "\n";
    }
    return 0;
}
