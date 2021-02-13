#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("sumdist.in");
    ofstream cout("sumdist.out");
    int n, m;
    cin >> n >> m;
    vector<vector<int> > d(n, vector<int>(n, 1e9)), g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 0; i < n; i++) {
        priority_queue<pair<int, int> > q;
        q.push({0, i});
        d[i][i] = 0;
        while (!q.empty()) {
            int v = q.top().second, l = -q.top().first;
            q.pop();
            if (l > d[i][v]) {
                continue;
            }
            for (int j = 0; j < (int)g[v].size(); j++) {
                if (d[i][v] + 1 < d[i][g[v][j]]) {
                    d[i][g[v][j]] = d[i][v] + 1;
                    q.push({-d[i][g[v][j]], g[v][j]});
                }
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (d[i][j] == 1e9) {
                continue;
            }
            res += d[i][j];
        }
    }
    cout << res;
    return 0;
}
