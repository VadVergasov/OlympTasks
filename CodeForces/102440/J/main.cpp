#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define inf 1e18

using namespace std;

vector<int> p, rnk;

void make(int v) {
    p[v] = v;
    rnk[v] = 1;
}

int parent(int v) {
    if (p[v] == v) {
        return v;
    } else {
        return (p[v] = parent(p[v]));
    }
}

void union_dsu(int a, int b) {
    a = parent(a), b = parent(b);
    if (a != b) {
        if (rnk[a] > rnk[b]) swap(a, b);
        p[a] = b;
        rnk[b] += rnk[a];
    }
}

int main() {
    int n, m;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (auto &i : v) {
        for (auto &j : i) {
            cin >> j;
        }
    }
    auto get_num = [&](int a, int b) { return ((a - 1) * m + b); };
    vector<vector<vector<int>>> mp(n, vector<vector<int>>(26)),
        mp1(m, vector<vector<int>>(26));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mp[i][v[i][j] - 'a'].push_back(get_num(i + 1, j + 1));
        }
    }
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            mp1[j][v[i][j] - 'a'].push_back(get_num(i + 1, j + 1));
        }
    }
    p.resize(n * m + 1);
    rnk.resize(n * m + 1);
    for (int i = 0; i <= n * m; ++i) {
        make(i);
    }
    for (auto i : mp) {
        for (auto j : i) {
            // sort(all(j));
            if (j.size() == 3) {
                union_dsu(j[0], j[2]);
            } else if (j.size() > 3) {
                int cur = j.front();
                for (auto z : j) {
                    union_dsu(cur, z);
                }
            }
        }
    }
    for (auto i : mp1) {
        for (auto j : i) {
            //  sort(all(j));
            if (j.size() == 3) {
                union_dsu(j[0], j[2]);
            } else if (j.size() > 3) {
                int cur = j.front();
                for (auto z : j) {
                    union_dsu(cur, z);
                }
            }
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ar = parent(get_num(a, b)), ar1 = parent(get_num(c, d));
        cout << ((ar == ar1) ? "Yes" : "No") << '\n';
    }
}
