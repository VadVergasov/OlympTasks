#include <bits/stdc++.h>

using namespace std;

int timer = 0, depth = 0;

void dfs(int v, int p, vector<int> &tin, vector<int> &tout,
         vector<vector<int> > &up, vector<vector<int> > &g,
         vector<bool> &used) {
    tin[v] = ++timer;
    up[v][0] = p;
    used[v] = true;
    for (int i = 1; i <= depth; i++) {
        up[v][i] = up[up[v][i - 1]][i - 1];
    }
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i]]) {
            dfs(g[v][i], v, tin, tout, up, g, used);
        }
    }
    tout[v] = ++timer;
}

bool upper(int a, int b, vector<int> &tin, vector<int> &tout) {
    return tin[a] <= tin[b] && tout[a] >= tout[b];
}

int lca(int a, int b, vector<vector<int> > &up, vector<int> &tin,
        vector<int> &tout) {
    if (upper(a, b, tin, tout)) {
        return a;
    }
    if (upper(b, a, tin, tout)) {
        return b;
    }
    for (int i = depth; i >= 0; i--) {
        if (!upper(up[a][i], b, tin, tout)) {
            a = up[a][i];
        }
    }
    return up[a][0];
}

int main() {
    int n;
    cin >> n;
    depth = ceil(log2(n));
    vector<vector<int> > g(n), up(n, vector<int>(depth + 1));
    vector<int> tin(n), tout(n);
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            a--;
            g[i].push_back(a);
            g[a].push_back(i);
        }
    }
    dfs(0, 0, tin, tout, up, g, used);
    int q, ans = 0;
    cin >> q;
    set<int> danger;
    for (int i = 0; i < q; i++) {
        int t, v;
        cin >> t >> v;
        v--;
        if (t == 1) {
            danger.insert(v);
            if (danger.size() == 1) {
                ans = v;
            } else {
                ans = lca(ans, v, up, tin, tout);
            }
        } else {
            danger.erase(v);
            if (danger.size() == 0) {
                ans = -1;
            } else {
                ans = (*danger.begin());
                for (auto i = ++danger.begin(); i != danger.end(); i++) {
                    ans = lca(ans, *i, up, tin, tout);
                }
            }
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}