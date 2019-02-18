#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long res = 0;
    cin >> n;
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        a[i] = make_pair(t1, t2);
    }
    for (int k = 1; k <= n; k++) {
        for (int pos = 0; pos <= n - k; pos++) {
            vector<int> pre(k);
            bool f = true;
            for (int i = 1; i <= k; i++) {
                if (a[pos + i].second -
                        max(a[pos + i].first, a[pos + i - 1].second) <
                    1) {
                    f = false;
                    break;
                }
                pre[i - 1] = a[pos + i].second -
                             max(a[pos + i].first, a[pos + i - 1].second);
            }
            if (f) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}