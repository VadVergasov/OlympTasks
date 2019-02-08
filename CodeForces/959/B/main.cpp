#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    vector<string> a(n), mes(m);
    vector<int> c(n);
    long long res = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < k; i++) {
        int x, mn = 10e8;
        cin >> x;
        vector<int> t(x);
        for (int j = 0; j < x; j++) {
            cin >> t[j];
        }
        for (int j = 0; j < x; j++) {
            mn = min(mn, c[t[j] - 1]);
        }
        for (int j = 0; j < x; j++) {
            c[t[j] - 1] = mn;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> mes[i];
        for (int j = 0; j < n; j++) {
            if (mes[i] == a[j]) {
                res += c[j];
            }
        }
    }
    cout << res;
    return 0;
}