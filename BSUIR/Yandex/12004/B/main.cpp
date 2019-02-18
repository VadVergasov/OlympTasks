#include <bits/stdc++.h>

using namespace std;

vector<bool> used;
vector<vector<int> > g;

void dfs(int v, int l, int r) {
    if (used[v]) {
        return;
    }
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++) {
        if (!used[g[v][i]] && g[v][i] >= l && g[v][i] <= r) {
            dfs(g[v][i], l, r);
            // cout << g[v][i] << " into\n";
        }
    }
}

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        long long res = 0;
        int n;
        cin >> n;
        g.resize(n);
        for (int i = 0; i < n - 1; i++) {
            int t1, t2;
            cin >> t1 >> t2;
            g[t1 - 1].push_back(t2 - 1);
            g[t2 - 1].push_back(t1 - 1);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                used.clear();
                used.resize(n, false);
                int comp = 0;
                // cout << "Deleted " << i << " " << j << "\n";
                for (int k = i; k < j; k++) {
                    if (!used[k]) {
                        // cout << "Not used " << k << "\n";
                        comp++;
                        dfs(k, i, j);
                    }
                }
                // cout << comp << "\n";
                if (comp == 1 || comp == 0) {
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}