#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("dijkstra.in");
    ofstream cout("dijkstra.out");
    int n, s, f;
    cin >> n >> s >> f;
    f--;
    s--;
    vector<vector<int> > g(n, vector<int>(n));
    vector<long long> d(n, 1e9);
    d[s] = 0;
    for (auto &i : g) {
        for (auto &j : i) {
            cin >> j;
            if (j == -1) {
                j = 1e9;
            }
        }
    }
    priority_queue<pair<int, int> > q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second, l = -q.top().first;
        q.pop();
        if (l > d[v]) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (d[v] + g[v][j] < d[j]) {
                d[j] = d[v] + g[v][j];
                q.push({-d[j], j});
            }
        }
    }
    if (d[f] == 1e9) {
        d[f] = -1;
    }
    cout << d[f];
    return 0;
}
