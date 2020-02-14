#include <bits/stdc++.h>

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<long long> > v(n, vector<long long>(m));
    while (k--) {
        long long t, a, b;
        cin >> t >> a >> b;
        --a;
        if (t == 1) {
            for (int j = 0; j < m; ++j) {
                v[a][j] = b;
            }
        } else {
            for (int i = 0; i < n; ++i) {
                v[i][a] = b;
            }
        }
    }
    for (auto i : v) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}