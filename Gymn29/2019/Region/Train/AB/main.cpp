#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mn = 10e9, mx = -1, res = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            t++;
        } else {
            if (t > 1) {
                res++;
                mn = min(mn, t);
                mx = max(mx, t);
                t = 1;
            }
        }
    }
    if (t > 1) {
        res++;
        mn = min(mn, t);
        mx = max(mx, t);
    }
    if (res == 0) {
        cout << "0 0 0";
        return 0;
    }
    cout << res << " " << mx << " " << mn;
    return 0;
}