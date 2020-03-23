#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<vector<int> > &g, vector<bool> &used, long long &res,
         vector<map<int, int> > &mp, vector<int> &c, vector<int> &p) {
    used[v] = true;
    for (int i = 0; i < (int)g[v].size(); i++) {
        if (g[v][i] != p[v]) {
            mp[v][c[g[v][i]]]++;
        }
        if (c[v] == c[g[v][i]] && p[v] != g[v][i]) {
            res++;
        }
        if (!used[g[v][i]]) {
            dfs(g[v][i], g, used, res, mp, c, p);
        }
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k;
    in >> n >> m >> k;
    vector<int> c(n);
    for (auto &i : c) {
        in >> i;
    }
    vector<vector<int> > g(n);
    vector<int> p(n);
    vector<bool> used(n, false);
    vector<map<int, int> > mp(n);
    p[0] = -1;
    p[1] = 0;
    g[0].push_back(1);
    g[1].push_back(0);
    for (int i = 2; i < n; i++) {
        int t;
        in >> t;
        t--;
        g[t].push_back(i);
        g[i].push_back(t);
        p[i] = t;
    }
    long long res = 0;
    dfs(0, g, used, res, mp, c, p);
    for (int i = 0; i < m; i++) {
        int x, y;
        in >> x >> y;
        x--;
        if (p[x] != -1) {
            mp[p[x]][c[x]]--;
            mp[p[x]][y]++;
            if (y == c[p[x]]) {
                res++;
            }
            if (c[x] == c[p[x]]) {
                res--;
            }
        }
        res -= mp[x][c[x]];
        res += mp[x][y];
        c[x] = y;
        out << res << "\n";
    }
    return 0;
}