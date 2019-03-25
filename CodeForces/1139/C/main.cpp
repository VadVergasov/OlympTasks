#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int> > > g;
vector<bool> used;

int s = 0;

const int mod = 1e9 + 7;

void dfs(int v) {
    if (used[v]) {
        return;
    }
    s++;
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i].first]) {
            dfs(g[v][i].first);
        }
    }
}

long long pw(int n, int p) {
    long long res = 1;
    for (int i = 0; i < p; i++) {
        res *= n;
        res %= mod;
    }
    return res;
}

int main() {
    int n, k, red = 0;
    cin >> n >> k;
    g.resize(n);
    used.resize(n, false);
    for (int i = 0; i < n - 1; i++) {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (t3 == 1) {
            continue;
        }
        g[t1 - 1].push_back(make_pair(t2 - 1, t3));
        g[t2 - 1].push_back(make_pair(t1 - 1, t3));
        if (t3 == 0) {
            red++;
        }
    }
    long long res = pw(n, k);
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            s = 0;
            dfs(i);
            res = (res + mod - pw(s, k)) % mod;
        }
    }
    cout << res;
    return 0;
}