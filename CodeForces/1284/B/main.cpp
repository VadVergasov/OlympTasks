#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, num = 0;
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
                num++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (f[i]) {
            d[i].first = -1;
            d[i].second = -1;
        }
    }
    vector<int> mx(n);
    for (int i = 0; i < n; i++) {
        mx[i] = d[i].second;
    }
    sort(mx.begin(), mx.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        if (f[i]) {
            res += n;
        } else {
            auto j = upper_bound(mx.begin(), mx.end(), d[i].first);
            res += (mx.end() - j) + num;
        }
    }
    cout << res;
    return 0;
}