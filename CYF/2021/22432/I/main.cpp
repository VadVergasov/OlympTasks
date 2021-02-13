#include <bits/stdc++.h>

using namespace std;

void dfs(int v, int path, int start, vector<vector<pair<int, int>>> &g,
         vector<vector<int>> &res, vector<bool> &used) {
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i].first]) {
            res[start][g[v][i].first] = path ^ g[v][i].second;
            dfs(g[v][i].first, path ^ g[v][i].second, start, g, res, used);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> g(n);
    vector<vector<int>> res(n, vector<int>(n));
    vector<bool> used(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++) {
        vector<bool> used(n, false);
        dfs(i, 0, i, g, res, used);
    }
    long long ans = 0;
    for (auto i : res) {
        for (auto j : i) {
            if (j == 0) {
                ans++;
            }
        }
    }
    cout << ans - (ans - n) / 2;
    return 0;
}
