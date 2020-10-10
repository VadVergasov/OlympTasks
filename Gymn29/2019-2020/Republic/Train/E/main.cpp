#include <bits/stdc++.h>

#pragma GCC optimize("O3,no-stack-protector,unroll-loops")

using namespace std;

vector<vector<int> > g;
vector<bool> used;

int dfs(int v) {
    used[v] = true;
    int res = 1;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i]]) {
            res += dfs(g[v][i]);
        }
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("input.txt");
    ofstream out("output.txt");
    in.tie(0);
    out.tie(0);
    int n, m, k;
    in >> n >> m >> k;
    g.resize(n);
    used.resize(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        in >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int num = 0;
    vector<int> comps;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            comps.push_back(dfs(i));
            num++;
        }
    }
    int full = 0;
    for (int i = 0; i < comps.size(); i++) {
        full += comps[i] * (comps[i] - 1) / 2;
    }
    int mx = num;
    sort(comps.begin(), comps.end());
    int sz = comps.size();
    while (m + k > full) {
        comps[sz - 2] += comps[sz - 1];
        sz--;
        full = 0;
        for (int i = 0; i < sz; i++) {
            full += comps[i] * (comps[i] - 1) / 2;
        }
        mx--;
    }
    out << max(1, num - k) << " " << mx;
    return 0;
}