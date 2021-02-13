#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < n; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        x--;
        y--;
        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }
    vector<vector<long long>> d(n);
    for (int i = 0; i < n; i++) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       less<pair<int, int>>>
            q;
        q.push({0, i});
        while (!q.empty()) {
            int w = q.top().first, x = q.top().second;
            q.pop();
            if (w > d[i][x]) {
                continue;
            }
            for (int j = 0; j < g[x].size(); j++) {
                int next = g[x][j].first, len = g[x][j].second;
                if (d[i][x] + len < d[i][next]) {
                    d[i][next] = d[i][x] + len;
                    q.push({d[x][next], next});
                }
            }
        }
    }
    return 0;
}
