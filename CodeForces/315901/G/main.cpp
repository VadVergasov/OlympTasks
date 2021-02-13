#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("distance.in");
    ofstream cout("distance.out");
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    s--;
    f--;
    vector<vector<pair<int, int>>> g(n);
    vector<int> d(n, 1e9), p(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    priority_queue<pair<int, int>> q;
    q.push({0, s});
    d[s] = 0;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.top().second, l = -q.top().first;
        q.pop();
        if (l > d[v]) {
            continue;
        }
        for (int j = 0; j < (int)g[v].size(); j++) {
            if (d[v] + g[v][j].second < d[g[v][j].first]) {
                d[g[v][j].first] = d[v] + g[v][j].second;
                p[g[v][j].first] = v;
                q.push({-d[g[v][j].first], g[v][j].first});
            }
        }
    }
    cout << d[f] << "\n";
    vector<int> res;
    int cur = f;
    while (cur != -1) {
        res.push_back(cur + 1);
        cur = p[cur];
    }
    reverse(res.begin(), res.end());
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
