#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > a(n);
    vector<pair<int, int> > d(n, make_pair(10e8, 0));
    vector<bool> f(n, false);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a[i].resize(t);
        for (int j = 0; j < t; j++) {
            cin >> a[i][j];
            d[i].first = min(d[i].first, a[i][j]);
            d[i].second = max(d[i].second, a[i][j]);
            if (j == 0) {
                continue;
            }
            if (a[i][j] > a[i][j - 1]) {
                f[i] = true;
            }
        }
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        if (f[i]) {
            res += n;
        } else {
            for (int j = 0; j < n; j++) {
                if (f[j]) {
                    res++;
                } else if (d[j].second > d[i].first) {
                    res++;
                }
            }
        }
    }
    cout << res;
    return 0;
}