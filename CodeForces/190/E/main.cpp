#include <bits/stdc++.h>

using namespace std;

vector<int> dfs(int v, set<int> &not_used, vector<vector<int> > &g,
                vector<bool> &used) {
    not_used.erase(v);
    used[v] = true;
    vector<int> ans;
    for (int i = 0; i < g[v].size() - 1; i++) {
        auto left = not_used.lower_bound(g[v][i] + 1);
        if (left == not_used.end()) {
            continue;
        }
        if (*left < g[v][i + 1]) {
            ans.push_back(dfs(*left, not_used, g, used));
        }
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > res;
    vector<vector<int> > g(n + 2);
    vector<bool> used(n + 2, false);
    set<int> not_used;
    for (int i = 0; i < m; i++) {
        g[m + 1].push_back(0);
        g[m + 1].push_back(n + 1);
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        not_used.insert(m + 1);
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            res.push_back(dfs(i, not_used, g, used));
        }
    }
    return 0;
}
