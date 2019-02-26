#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long res = 0;
    int n, k, m;
    cin >> n >> k >> m;
    map<string, int> all;
    vector<string> a(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        all[a[i]] = c[i];
    }
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        vector<int> t(x);
        int mn = 1e9;
        for (int j = 0; j < x; j++) {
            cin >> t[j];
            t[j]--;
            mn = min(mn, c[t[j]]);
        }
        for (int j = 0; j < x; j++) {
            all[a[t[j]]] = mn;
        }
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        res += all[s];
    }
    cout << res;
    return 0;
}