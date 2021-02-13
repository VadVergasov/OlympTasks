#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<vector<int> > &g, vector<bool> &used, long long &res) {
    used[v] = true;
    if (v == 0) {
        res += ceil(log2((g[v].size() + 1)));
    } else {
        res += ceil(log2(((int)g[v].size())));
    }
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (!used[g[v][i]]) {
            res++;
            dfs(g[v][i], g, used, res);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > g(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    long long res = 0;
    vector<bool> used(n, false);
    dfs(0, g, used, res);
    cout << res;
    return 0;
}
