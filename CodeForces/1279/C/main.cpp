#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, m, mx = 0;
        long long res = 0;
        cin >> n >> m;
        map<int, int> d;
        vector<int> a(n), b(m);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            d[a[j]] = j + 1;
        }
        for (auto &j : b) {
            cin >> j;
        }
        for (int j = 0; j < m; j++) {
            if (d[b[j]] < mx || d[b[j]] == j + 1) {
                res++;
            } else {
                res += (d[b[j]] - j - 1) * 2 + 1;
            }
            mx = max(mx, d[b[j]]);
        }
        cout << res << "\n";
    }
    return 0;
}