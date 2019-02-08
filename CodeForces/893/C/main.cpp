#include <bits/stdc++.h>

using namespace std;

long long res, ans;
vector<short int> used(100001);
int n, m, x, y;
vector<long long> c(100001);
vector<vector<int> > graph(100001);

void dfs(long long v) {
    used[v] = 1;
    res = min(res, c[v]);
    for (int i = 0; i < graph[v].size(); i++) {
        if (!used[graph[v][i]]) {
            dfs(graph[v][i]);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            res = 1000000000;
            dfs(i);
            ans += res;
        }
    }
    cout << ans;
    return 0;
}
