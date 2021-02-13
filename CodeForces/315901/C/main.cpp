#include <bits/stdc++.h>

using namespace std;

bool f = false;

void dfs(int v, vector<vector<pair<int, int> > > &g, vector<bool> &used,
         vector<int> &p) {
    used[v] = true;
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (!used[g[v][i].first]) {
            p[g[v][i].first] = v;
            dfs(g[v][i].first, g, used, p);
        } else if (g[v][i].first != p[g[v][i].first] &&
                   g[v][i].first != (int)g.size() - 1) {
            f = true;
        }
    }
}

int main() {
    ifstream cin("maze.in");
    ofstream cout("maze.out");
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int> > > g(n);
    vector<vector<int> > d(n, vector<int>(n));
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        d[a][b] = max(d[a][b], c);
        g[a].push_back({b, c});
    }
    vector<bool> used(n);
    vector<int> p(n);
    p[0] = -1;
    dfs(0, g, used, p);
    if (!used[n - 1]) {
        cout << ":(";
        return 0;
    }
    if (f) {
        cout << ":)";
        return 0;
    }
    int res = 0, cur = n - 1;
    while (cur != -1) {
        if (cur == 0) {
            break;
        }
        res += d[p[cur]][cur];
        cur = p[cur];
    }
    cout << res;
    return 0;
}
