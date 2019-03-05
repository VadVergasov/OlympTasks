#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, res = 0;
    cin >> n >> m >> k;
    vector<int> p(n), s(n);
    vector<vector<int> > sc(m + 1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s[i] = t;
        sc[t].push_back(p[i]);
    }
    for (int i = 0; i < m + 1; i++) {
        sort(sc[i].begin(), sc[i].end());
    }
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        t--;
        if (sc[s[t]].back() != p[t]) {
            res++;
        }
    }
    cout << res;
    return 0;
}