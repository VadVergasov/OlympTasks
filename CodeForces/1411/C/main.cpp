#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, right = 0;
        cin >> n >> m;
        vector<pair<int, int> > c(m);
        vector<int> x(n), y(n);
        for (auto &[i, j] : c) {
            cin >> i >> j;
            i--;
            j--;
            if (i == j) {
                right++;
            }
            x[i]++;
            y[j]++;
        }
        int res = 0;
        for (int i = 0; i < m; i++) {
            if (c[i].first != c[i].second &&
                (y[c[i].first] != 0 || x[c[i].second] != 0)) {
                y[c[i].first] = 0;
                x[c[i].second] = 0;
                res++;
            }
            res++;
        }
        cout << res << "\n";
    }
    return 0;
}
