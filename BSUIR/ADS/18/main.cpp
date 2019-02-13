#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > a;
vector<bool> used;

void dfs(int v) {
    if (used[v]) {
        return;
    }
    used[v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        if (!used[a[v][i]]) {
            dfs(a[v][i]);
        }
    }
}

int main() {
    int n, m, res = 0;
    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        a[t1 - 1].push_back(t2 - 1);
        a[t2 - 1].push_back(t1 - 1);
    }
    used.resize(n, false);
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            res++;
            dfs(i);
        }
    }
    if (res > 1) {
        cout << -1;
    } else {
        cout << m - n + 1;
    }
    return 0;
}